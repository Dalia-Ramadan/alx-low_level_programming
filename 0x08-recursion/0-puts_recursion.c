#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	scanf("%s" , s);
	printf("%s %s", s ,"\n");
	 _puts_recursion("Puts with recursion");
}
