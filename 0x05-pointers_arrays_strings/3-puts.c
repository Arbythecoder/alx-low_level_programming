#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * @arbythecoder
 * Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;
	
	while (str[i])
	{ 	
		_putchar(str[i]);
		i++;

	}
	_putchar ('\n');
}
