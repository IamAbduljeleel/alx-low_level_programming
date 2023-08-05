#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: Pointer to string
 * @accept: String to be searched
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s  == accept[j])
			return (s);
		}
		s++;
	}
	return ('\0');
}
