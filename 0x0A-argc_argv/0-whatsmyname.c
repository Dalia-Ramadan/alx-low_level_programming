#include "main.h"
#include <stdio.h>
/**
 * @argc: contains the number of arguments passed to the program
 * @argv: is a one-dimensional array of strings
 */
int main (__attribute__ ((unused))int argc, char *argv[])
{
	printf("%s", argv[0]);
	return 0;
}
