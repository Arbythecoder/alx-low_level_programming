#include <stdlib.h>
#include "dog.h"

/**
 * free dog -  frees dogs.
 * @d: the dog to free.
 */

void free_dog(dog_t*d);
{
	if (d)
	{

	free(d->owner);
	free(d->name);
	free(d);

	}
}
