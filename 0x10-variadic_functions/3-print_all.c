#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed 
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = " ";

	va_list list;

	va_star(list, format;
