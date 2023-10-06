#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints all numbers of base 16 in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	char letter;

	for (digit = '0'; digit <= '9'; digit++)

		putchar(digit);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
