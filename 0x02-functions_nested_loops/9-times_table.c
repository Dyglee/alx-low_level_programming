#include "main.h"
/**
 *times_table - Prints the 9 times table, starting from 0.
 *Description: Uses two nested loops to iterate over numbers
 *from 0 to 9 for rows and columns. It calculates the product
 *and formats the output with appropriate spacing and commas.
 *Single-digit results are prefixed with two spaces, while
 *two-digit results are prefixed with one space.
 *Return: Nothing.
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;

			if (b == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
