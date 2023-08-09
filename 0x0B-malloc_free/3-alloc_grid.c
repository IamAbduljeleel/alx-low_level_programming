#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: The width of the grid
 * @height: Height of the grid
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) *  height);

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
			{
				free(result[j]);
			}
			free(result);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k >= 0; k--)
		{
			result[k][l] = 0;
		}
	}
	return (result);
}
