testexe_sources = ['hellomesontest.cpp','osmacros.cpp']
testexe = executable('hellomesontest', testexe_sources,
                                include_directories : inc,
                                link_with : hellomesonlib,
                                install : true)
test('hellomeson test', testexe)

