#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 *
 * Return: Pointer to newly allocated space containing concatenated string,
 *         or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length_s1 = 0, length_s2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1])
		length_s1++;
	while (s2[length_s2])
		length_s2++;

	if (n >= length_s2)
		n = length_s2;

	concat = malloc(length_s1 + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}

