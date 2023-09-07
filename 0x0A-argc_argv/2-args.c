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
	for (int i=0 ; i<argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
