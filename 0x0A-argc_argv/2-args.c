#include"main.h"
#include<stdio.h>
/**
 * main - function
 * @argc: number of arguments passed
 * Return: Always 0
 * @argv: arguments passed here
 */
int main(int argc, char *argv[])
{
	for (argc=0; argc > 0; argc++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
