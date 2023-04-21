#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arguments
 *
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
        unsigned int i;
        int sum = 0;

	if (n == 0)
		 return (0);

	va_start(va_list, n);
	for(i = 0; 1 <  n; 1++)
		sum += va_arg(valist, int);

	va_end(valist);
        return (sum);
}
