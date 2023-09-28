#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: String
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	int howlong = 0;

	if (*s)
	{
		howlong++;
		howlong += _strlen_recursion(s + 1);
	}
	return (howlong);
}
