#include"main.h"
/**
 * _pow_recursion-function that returns the value of x raised to the power of y
 * @x: is a basic
 * @y: is a power
 * return the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (x==0 || y==0)
	{
		return (0);
	}
	else if (x>0 && y>0)
	{
		return (_pow_recursion(x, y));
	}
	else
		return (-1);
}
