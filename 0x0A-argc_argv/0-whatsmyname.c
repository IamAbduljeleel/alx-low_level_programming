#include <stdio.h>

/**
 * main - Prints it name followed by a new line
 * @argc: Argument count, number of command line argument
 * @argv: Array that contains the command line argument
 * Return: (0) when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
