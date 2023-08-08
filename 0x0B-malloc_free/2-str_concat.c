#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1len = 0;
	int s2len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	result = malloc(sizeof(char) * (s1len + s2len));

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		result[s1len + i] = s2[i];
	return (result);
}
