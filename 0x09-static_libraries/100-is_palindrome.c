#include "main.h"

/**
 * get_length - recursively determines the length of a string
 * @s: The string to check
 * Return: length of the string
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}

/**
 * checker - recursively check if string segment is palindrome
 * @s: the string
 * @start: index for start of string
 * @end: index for end of string
 * Return: 1 if segment is palindrome, otherwise 0
 */
int checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - determines if string is palindrome using recursion
 * @s: the string
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = get_length(s);

	return (checker(s, 0, len - 1));
}
