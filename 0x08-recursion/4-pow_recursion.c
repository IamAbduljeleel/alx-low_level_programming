#include "main.h"

/**
 *  _pow_recursion - raised to the power as  an integer
 *  @x: number
 *  @y: power
 *  Return: the power of as an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
