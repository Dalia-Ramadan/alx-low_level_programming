#include"main.h"
#include <stdio.h>
/**
 * _print_rev_recursion-print a string in reverse.
 * @s: is a string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(++s);
	}
}
