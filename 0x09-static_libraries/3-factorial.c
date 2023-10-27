#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number for which factorial needs to be calculated.
 *
 * Return: Factorial of n if n >= 0, otherwise -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

