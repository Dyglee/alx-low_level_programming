
int is_separator(char c, char sep[]);

/**
 * cap_string - Capitalizes all words in a string.
 * @s: Pointer to the string to capitalize.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;
	char sep[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'
	};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || (i > 0 && is_separator(s[i - 1], sep)))
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
/**
 * is_separator - Checks if a character is a separator.
 * @c: Character to check.
 * @sep: Array of separator characters.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */


int is_separator(char c, char sep[])
{
	int j;

	for (j = 0; sep[j] != '\0'; j++)
	{
		if (c == sep[j])
			return (1);
	}
	return (0);
}
