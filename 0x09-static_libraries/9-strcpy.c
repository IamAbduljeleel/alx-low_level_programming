#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: The destination
 * @src: Source
 * Return: the pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
