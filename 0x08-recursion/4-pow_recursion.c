#include "main.h"

/**
 * _pow_recursion - Returns the value of numbers raised to power
 * @x: Number
 * @y: Power
 * Return: The value of the indices
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
