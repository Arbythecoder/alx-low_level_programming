#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value in the range
 * @max: maximum value in the range
 *
 * Return: pointer to the array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *myarray, i;

	if (min > max)
		return (NULL);

	myarray = malloc(sizeof(int) * (max - min + 1));
	if (!myarray)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		myarray[i] = min + i;

	return (myarray);
}
