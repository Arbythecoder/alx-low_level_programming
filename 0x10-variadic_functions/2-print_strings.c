#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator string between strings
 * @n: number of strings to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arguments(arguments, char *);

		if (str == NULL)
			printf("(nil)");
		else if (i == 0 || separator == NULL)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(arguments);
	printf("\n");
}
