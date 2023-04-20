#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Return: struct of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name, len_owner;

	dog_t *new_dog = NULL;

	len_name = 0, len_owner = 0;
	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
