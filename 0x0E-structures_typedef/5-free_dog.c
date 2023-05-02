#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freed memory allocated for a dog_t struct.
 * @d: an address to dog_t struct to be freed.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
