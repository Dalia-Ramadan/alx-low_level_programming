#include"main.h"
#include<stdio.h>
#include<stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *S;
	unsigned int X;

	S = malloc(sizeof(char) * size);
	if (size == 0 || S == NULL)
		return (NULL);

	for (X = 0; X < size; X++)
		S[X] = c;
	return (S);
}

