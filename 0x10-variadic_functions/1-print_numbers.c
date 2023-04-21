#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:  print string between numbers
 * @n:  number of integers
 * @...: prints variable number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

         va_list args;
         va_start(args, n);
	 int num;

	 for (unsigned int i = 0; i < n; i++)
		 {
		 printf("%d", num);
		if (i < n -1 && separator != NULL) printf("%s", separator);
                }
	 printf("\n");

	 va_end(args);

	va_end(args);
}
