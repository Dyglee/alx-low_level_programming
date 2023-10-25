#include "main.h"

/**
 * _square_root - a helper function to find the possible square root.
 * @n: the number to find the square root of.
 * @i: the current guess for the square root.
 *
 * Return: the natural square root of n or -1 if n has no natural square root.
 */
int _square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_square_root(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: the number to find the square root of.
 *
 * Return: the natural square root of n or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_square_root(n, 1));
}

