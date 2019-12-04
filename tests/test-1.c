#include <stdio.h>

#include "elstr.h"

int main() {
	str_t hello;
	str_init_from_c(hello, "Hello world!");
	puts(str_c(hello));
	str_free(hello);
	return 0;
}
