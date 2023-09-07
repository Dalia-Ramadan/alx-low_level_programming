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
	if (argc > 2)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		printf("%i\n", x*y);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
