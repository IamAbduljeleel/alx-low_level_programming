#include <stdio.h>

/**
 * main - this prints the sizeof function
 *
 * Return: the value 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
