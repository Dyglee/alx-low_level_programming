#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints all single digit numbers of base 10 starting from 0
 *Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)

	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
