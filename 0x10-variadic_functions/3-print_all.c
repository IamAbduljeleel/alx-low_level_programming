#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: The argument specifier
 *
 * Return: The arguments given based on format specifier
 */

void print_all(const char * const format, ...)
{
	int i, view_stat;
	char *str;
	va_list spec;

	va_start(spec, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spec, int));
				view_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spec, double));
				view_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spec, int));
				view_stat = 0;
				break;
			case 's':
				str = va_arg(spec, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				view_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && view_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spec);
}
