#include <stdio.h>

/**
 *main - Entry point
 *all possible combinations of single-digit numbers separated by ', '
 *Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)

	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
