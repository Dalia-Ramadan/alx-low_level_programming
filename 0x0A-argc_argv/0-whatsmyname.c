#include "main.h"
#include <stdio.h>
/**
 * @argc: contains the number of arguments passed to the program
 * @argv: is a one-dimensional array of strings
 */
int main (int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", *argv++);
	}
	else
	{
		printf("The command had no other arguments.\n");
	}
	return 0;
}
