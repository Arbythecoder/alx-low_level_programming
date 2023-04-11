#include "main.h"

/**
 * _puts_recursion - prints a string, following a new line.
 * @s: the string to be printed.
 *
 * Return: Always 0 (success).
 */



void _puts_recursion(char *s)
{
	
	int a = 0;
	while (s[a] !='\0'){
	 _putchar(s[a]);
	 a++;
    }
    _putchar('\n');
}
