#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;
	unsigned int X= 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		S = malloc(sizeof(char) * (len1 + n + 1));
	else
		S = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (X < len1)
	{
		S[X] = s1[X];
		X++;
	}

	while (n < len2 && X < (len1 + n))
		S[X++] = s2[j++];

	while (n >= len2 && X < (len1 + len2))
		S[X++] = s2[j++];
 
	S[X] = '\0';

	return (s);
}

