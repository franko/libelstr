elstr_tests = [
    {'name': 'test-1', 'sources': 'test-1.c', 'describe': 'basic test'},
    {'name': 'test-cpp-1', 'sources': 'test-cpp-1.cpp', 'describe': 'basic test C++'},
    {'name': 'test-cpp-2', 'sources': 'test-cpp-2.cpp', 'describe': 'basic format test'},
]

foreach test : elstr_tests
    exec_test = executable(test['name'], test['sources'],
        include_directories: libelstr_include,
        link_with: libelstr
    )
	test(test['describe'], exec_test)
endforeach
