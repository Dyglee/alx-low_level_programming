/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4.
 * Letters e and E should be replaced by 3.
 * Letters o and O should be replaced by 0.
 * Letters t and T should be replaced by 7.
 * Letters l and L should be replaced by 1.
 * @s: the input string.
 *
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char rep[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rep[j];
				break;
			}
		}
	}

	return (s);
}

