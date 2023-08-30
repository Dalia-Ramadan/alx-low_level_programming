#include "main.h"
/**
 * _puts_recursion-prints a string
 * @s: is a string
 */
void _puts_recursion(char *s)
{
	_puts_recursion(*s);
}
