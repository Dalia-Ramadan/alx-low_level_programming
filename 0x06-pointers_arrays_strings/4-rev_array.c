#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: size of  array
 */

void reverse_array(int *a, int n)
{
	int i;
	int d;

	for (i = 0; i < (n / 2); i++)
	{
		d = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = d;
	}
}
