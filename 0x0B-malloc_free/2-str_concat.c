#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *Conct;
	int I, CI;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	I = CI = 0;
	while (s1[I] != '\0')
		I++;
	while (s2[CI] != '\0')
		CI++;
	Conct = malloc(sizeof(char) * (I + CI + 1));

	if (Conct == NULL)
		return (NULL);
	I = CI = 0;
	while (s1[I] != '\0')
	{
		Conct[I] = s1[I];
		I++;
	}

	while (s2[CI] != '\0')
	{
		Conct[I] = s2[CI];
		I++, CI++;
	}
	Conct[I] = '\0';
	return (Conct);
}

