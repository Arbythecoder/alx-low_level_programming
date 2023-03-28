#include "main.h"

/**
 * _strlen - checkd the length of the string
 * @s: -check string
 * @arbythecoder
 * Return: Always 0.
 */

int _strlen(char *s)
{
int length_of_string =0;
	
	while(s[length_of_string])
		length_of_string++;
	return (length_of_string);
}
