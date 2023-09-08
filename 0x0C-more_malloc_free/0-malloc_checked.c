#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * void *malloc_checked a function that allocates memory using malloc.
 * @b:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = (int*)malloc(b * sizeof(int));
	if (p=='\0')
	return (p);
}
