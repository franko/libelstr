#include <stdio.h>

#include "elstr_cpp.h"

int main() {
	elstr::str hello{"Hello world!"};
	puts(hello.cstr());
	return 0;
}
