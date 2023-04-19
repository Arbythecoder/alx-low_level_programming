#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using function pointer
 * @name: string to add
 * @f: function pointer 
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if(name ==NULL ||f == NULL)
		RETURN;

	f(name);
}
