#include <stdio.h>

/**
 * main - Prints numbers of arguments
 * @argc: Number of command line argument
 * @argv: The aray that contains the normal line argument
 * Return: (0) when Succesful
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
