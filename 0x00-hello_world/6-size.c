#include <stdio.h>

/**
 * main - this is the integer function
 *
 * Return: the value 0 on success
 */

int main(void)
{
	print("Size of a char: %lu byte(s)", sizeof(char));
	print("Size of int: %lu byte(s)", sizeof(int));
	print("Size of long int: %lu byte(s)", sizeof(long int));
	print("Size of long long int: %lu byte(s)", sizeof(long long int));
	print("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
