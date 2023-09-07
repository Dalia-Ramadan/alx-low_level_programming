#include"main.h"
#include<stdio.h>
/**
 * main - function to print file name
 * @argc: count of the arguments supplied to the program and the
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
