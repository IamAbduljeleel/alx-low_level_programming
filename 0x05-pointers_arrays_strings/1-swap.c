#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: value of 1
 * @b: value of 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
