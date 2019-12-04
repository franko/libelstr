#include <stdio.h>

#include "elstr_cpp.h"

int main() {
	elstr::str pi = elstr::str::format("pi= %g", 3.141592); 
	puts(pi.cstr());
	return 0;
}
