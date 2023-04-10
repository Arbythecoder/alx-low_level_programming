#include "main.h"

/**
 * _isupper - Checks whether a given character is uppercase.
 *
 * @c: The character to check.
 *
 * Return: Returns 1 if the @c is uppercase, return 0.
 */

int _isupper(int c)
{
	int is_upper = 0;

	if (c >= 'A' && c <= 'Z')
		is_upper = 1;
	return is_upper;
}
