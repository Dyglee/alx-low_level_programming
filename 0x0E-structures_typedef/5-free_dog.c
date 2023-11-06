#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog of type dog_t
 * @d: dog_t pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

