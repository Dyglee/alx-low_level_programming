#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a new dog (dog_t), NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *new_name, *new_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	new_name = strdup(name);
	if (new_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	new_owner = strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(newdog);
		return (NULL);
	}

	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;

	return (newdog);
}

