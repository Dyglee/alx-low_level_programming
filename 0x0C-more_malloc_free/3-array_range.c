#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Description: Allocates memory containing values from `min` to `max`,
 * inclusive, ordered from `min` to `max`. Returns NULL if `min` > `max` or
 * if `malloc` fails.
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		arr[i] = min;

	return (arr);
}

