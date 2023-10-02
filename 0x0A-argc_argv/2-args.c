#include <stdio.h>

/**
 * main - Prints all the arguments it receives
 * @argc: Number of command line of argument
 * @argv: Array that contains the program command line argument
 * Return: (0) When Successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
