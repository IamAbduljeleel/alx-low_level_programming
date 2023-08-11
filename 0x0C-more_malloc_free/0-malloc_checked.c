#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to allocate memory to
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *ma;

	ma = malloc(b);
	if (ma == NULL)
		exit(98);
	else
		return (ma);
}
