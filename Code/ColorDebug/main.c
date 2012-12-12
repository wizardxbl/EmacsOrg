#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

int main(int argc, char *argv[])
{
	color_debug("Hello World!");
	color_debug_recv("Hello World!");
	color_debug_send("Hello World!");
	color_debug_err("Hello World!");
	return 0;
}
