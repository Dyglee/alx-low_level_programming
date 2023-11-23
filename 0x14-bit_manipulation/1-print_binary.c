#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int is_first_bit = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; mask > 0; mask >>= 1)
	{
		if ((n & mask) == 0 && is_first_bit)
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			is_first_bit = 1;
		}
	}
}

