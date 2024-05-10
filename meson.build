project(
    'helloworldlib', 
    'cpp', 
    version : '1.0.0'
)

cpp_args = []
if host_machine.system() == 'windows' and get_option('default_library') == 'shared'
    cpp_args += '-DHELLOWORLDLIB_EXPORTS'
endif

helloworldlib = shared_library(
    'HelloWorldLib', 
    'HelloWorld.cpp', 
    cpp_args : cpp_args
)
install_headers('HelloWorld.h')

# Add the executable target
executable(
    'HelloWorldConsole',
    'HelloWorldConsole.cpp',
    link_with : helloworldlib
)
