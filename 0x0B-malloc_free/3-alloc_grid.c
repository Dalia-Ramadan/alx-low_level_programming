#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **Mee;
	int x, y;
	if (width <= 0 || height <= 0)
		return (NULL);
	Mee = malloc(sizeof(int *) * height);
	if (Mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		Mee[x] = malloc(sizeof(int) * width);

		if (Mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(Mee[x]);
			free(Mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			Mee[x][y] = 0;
	}

	return (Mee);
}


