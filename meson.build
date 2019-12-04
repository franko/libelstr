project('libelstr', 'c', 'cpp', version: '0.1.0', default_options : ['c_std=c99' ,'cpp_std=c++14'])

host_system = host_machine.system()

libelstr_cflags = []
if host_system == 'windows'
    libelstr_cflags += '-DWIN32'
endif

libelstr_include = include_directories('include')
install_headers('include/elstr.h')

subdir('src')
subdir('tests')

pkg = import('pkgconfig')

pkg.generate(libelstr,
    filebase : 'libelstr',
    name : 'Libelstr',
    description : 'The Elementary string library',
    url : 'github.com/franko/libelstr',
)
