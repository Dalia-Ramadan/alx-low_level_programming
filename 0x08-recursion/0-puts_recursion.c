#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if( *s == '\0')
	{
		printf('\n');
	}
	else
	{
		printf("%c %s", *s, ++s);
	}
}
