#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	out = malloc(height * sizeof(int *));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(width * sizeof(int));
		if (out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(out[i]);
			free(out);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			out[i][j] = 0;

	return (out);
}
