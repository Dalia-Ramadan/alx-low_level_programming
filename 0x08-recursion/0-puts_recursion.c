#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion-prints a string
 * @s: is a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("%c", '\n');
	printf("%s", s);
	_puts_recursion(++s);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        _puts_recursion("First, solve the problem. Then, write the code");
        return (0);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        _puts_recursion("Talk is cheap. Show me the code");
        return (0);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        _puts_recursion("");
        return (0);
}
