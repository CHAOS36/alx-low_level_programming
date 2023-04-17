#include "dog.h"

/**
 * free_dog - frees memory for a struct dog
 *  @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
