#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function to print all arguments being passed
 * @argc: argument numbers
 * @argv: arguments passed
 * Return (1)
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int x = atoi(argv[2]);
		int y = atoi(argv[3]);
		printf("%i\n", x*y);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (1);
}
