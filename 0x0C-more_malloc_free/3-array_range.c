#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: Minimum array values
 * @max: Maximun araay value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *result;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	result = malloc(sizeof(int) * j);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
