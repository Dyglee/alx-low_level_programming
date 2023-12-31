/**
 * print_dog - Prints a struct dog
 * @d: The struct dog to be printed
 * Description: If an element of d is NULL,prints (nil) instead of the element.
 * If d is NULL, prints nothing.
 */
#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

