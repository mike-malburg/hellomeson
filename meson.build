project(
  'hellomeson',
  'cpp', 
  version: '1.0.0',
  default_options : ['cpp_std=c++20']
)

# Define exports for windows
cpp_args = []
if host_machine.system() == 'windows' and get_option('default_library') == 'shared'
    cpp_args += '-DHELLOMESON_EXPORTS'
endif

inc = include_directories('include')
subdir('include')
subdir('src')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : hellomesonlib,
                 version : '1.0',
                 name : 'libhellomeson',
                 filebase : 'hellomeson',
                 description : 'A test C++ library, built with meson.')
