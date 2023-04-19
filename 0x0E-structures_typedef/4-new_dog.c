#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * @strlen - This searches for string length.
 * @str: The string 
 *
 * Return: The length of string
 */

int _strlen(char *str)
{
	int len =o;

	while (*str++)
		len++;
	return (len);
