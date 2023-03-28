#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @arbythecoder
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
