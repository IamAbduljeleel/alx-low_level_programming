#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: Members of the array
 * @size: Size of the array
 * Return: Pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
