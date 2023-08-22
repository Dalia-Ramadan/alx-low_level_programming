#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0 if success
 */
int main(void)
{
	int a, b;

	srand(time(NULL));
	a= 0;
	while (b <= 2645)
	{
		a = (rand() % 128);
		b+= a;
		printf("%c", a);
	}

	printf("%c", 2772 - b);

	return (0);
}
