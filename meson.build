project('helloworldmeson', 'cpp', version: '1.0.0')

# Define exports for windows
cpp_args = []
if host_machine.system() == 'windows' and get_option('default_library') == 'shared'
    cpp_args += '-DHELLOWORLDLIB_EXPORTS'
endif

# Define a shared library
lib = shared_library('HelloWorldLib', 'HelloWorld.cpp', cpp_args : cpp_args)

# Define an executable that links with the library
executable('HelloWorldApp', 'main.cpp', link_with: lib)

