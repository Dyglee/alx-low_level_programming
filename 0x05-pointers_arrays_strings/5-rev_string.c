#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;

	int start, end;

	char v;

	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		v = s[start];
		s[start] = s[end];
		s[end] = v;

		start++;
		end--;
	}
}
