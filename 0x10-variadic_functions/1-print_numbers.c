#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 * @separator: The string to be printed betweeen numbers
 * @n: The number of integers to passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(p, unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
