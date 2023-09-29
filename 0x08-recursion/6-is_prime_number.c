#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - Test for a prime number
 * @n: number to be tested
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - Calculates if a number is prime recursively
 * @n: Number to be tested
 * @i: Iterator
 * Return: 1f n is a prime number, 0 if not
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, i - 1));
}
