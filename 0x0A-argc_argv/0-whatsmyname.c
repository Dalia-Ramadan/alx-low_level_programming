#include "main.h"
#include <stdio.h>
/**
 * main - function to print file name
 * @argc: count of the arguments supplied to the program and the
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */
int main (__attribute__ ((unused)) int argc, char *argv[])
{
	printf ("%s \n", argv[0] );
	return (0);
}
