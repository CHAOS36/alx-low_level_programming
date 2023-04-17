#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: Initialises the struct dog
 * @d: pointer to dog
 * @name: Name to give to dog
 * @age: The age of the dog
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
