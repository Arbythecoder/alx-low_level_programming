#include "function_pointers.h"

/**
 * array_iterator  - function given as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && action)
		while (array <= end)
			action(*array++);
}
