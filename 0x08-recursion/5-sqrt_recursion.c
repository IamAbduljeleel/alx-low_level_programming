#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that returns the natural square root
 * @n: Numbers
 * Return: The natural squares root of numbers
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recurses to find the natural
 * Square root
 * @n: number to calculate the square root of
 * @i: Iterator
 * Return: The resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
