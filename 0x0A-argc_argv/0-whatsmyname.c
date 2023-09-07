#include "main.h"
#include <stdio.h>
/**
 * @argc: is an integer variable that stores the number of command-line arguments passed by the user including the name of the program.
 * @argv: is an array of character pointers listing all the arguments.
 */
int main (__attribute__ ((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return 0;
}
