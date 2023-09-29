#include "main.h"

/**
 * _strlen_recursion - to get the string length
 * @s: String
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - Compare each character of the string
 * @s: String
 * @l: Smallest Iterator
 * @r: Largest Iterator
 * Return: int
 */

int compare_string(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + compare_string(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - Test for Palindrome
 * @s: String
 * Return: 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
