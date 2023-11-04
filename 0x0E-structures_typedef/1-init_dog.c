#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner to assign to the dog
 *
 * Description: This function initializes a struct dog variable with the
 * provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

