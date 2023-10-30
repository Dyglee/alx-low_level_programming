#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if fails.
 */
char *_strdup(char *str)
{
	unsigned int length, i;
	char *dup_str;

	if (!str)
		return (NULL);

	for (length = 0; str[length]; length++)
		;

	dup_str = malloc(length + 1);
	if (!dup_str)
		return (NULL);

	for (i = 0; i < length; i++)
		dup_str[i] = str[i];

	dup_str[length] = '\0';

	return (dup_str);
}

