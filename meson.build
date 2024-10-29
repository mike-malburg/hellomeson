project(
    'helloworldmeson', 
    'cpp', 
    version : '1.0.0'
)

cpp_args = []
if host_machine.system() == 'windows' and get_option('default_library') == 'shared'
    cpp_args += '-DHELLOWORLDLIB_EXPORTS'
endif

out_dir = meson.global_build_root()
bin_dir = out_dir / 'bin'
include_dir = out_dir / 'include'

helloworldlib = shared_library(
    'HelloWorldLib', 
    'HelloWorld.cpp', 
    cpp_args : cpp_args,
    install : true,
    install_dir : bin_dir
)
install_headers('HelloWorld.h', install_dir : include_dir )

# Add the executable target
executable(
    'HelloWorldConsole',
    'HelloWorldConsole.cpp',
    link_with : helloworldlib,
    install : true,
    install_dir : bin_dir
)

# HelloWorldLib.pc
pkg = import('pkgconfig')
pkg.generate(helloworldlib,
  name: 'HelloWorld Meson Sample',
  filebase: 'HelloWorldLib',
  description: 'HelloWorld Meson Sample',
  extra_cflags: cpp_args,
  subdirs: 'HelloWorldLib',
  version: meson.project_version(),
  install_dir: bin_dir / 'pkgconfig'
)