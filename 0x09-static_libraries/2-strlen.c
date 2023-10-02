#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: String to be counted
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
