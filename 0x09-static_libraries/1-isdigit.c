#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: parameter check function
 *
 * Return: 1 on success and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
