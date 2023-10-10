#include "main.h"

/**
 *_isalpha - checks if a character is a letter
 *@c: character to check
 *Return: 1 if c is a letter (uppercase or lowercase), otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	return (1);
	else
	return (0);
}

