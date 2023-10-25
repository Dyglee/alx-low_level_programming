#include "main.h"

/**
 * prime - Checks if a number is prime recursively.
 * @n: The number to be checked.
 * @i: The current divisor being tested.
 *
 * Return: 1 if the number is prime, otherwise return 0.
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if the integer is a prime, otherwise return 0.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

