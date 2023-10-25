#include "main.h"

/**
 * checker - Check if a string segment is a palindrome
 * @start: Pointer to the start of the segment
 * @last: Pointer to the end of the segment
 * Return: 1 if the segment is a palindrome, otherwise 0
 */
int checker(char *start, char *last)
{
	if (start > last)
		return (1);
	if (*start != *last)
		return (0);
	return (checker(start + 1, last - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	char *last = s;

	while (*last)
		last--;
	last--;

	return (checker(s, last));
}

