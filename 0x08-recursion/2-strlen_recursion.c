#include "main.h"
/**
 * int _strlen_recursion-returns the length of a string.
 * @s: is a string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(++s));
	}
	return (0);
}
