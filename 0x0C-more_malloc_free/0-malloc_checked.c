#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of memory to be allocated.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	printf("Error: malloc failed\n");
	exit(98);
	}

	(return p);
}
