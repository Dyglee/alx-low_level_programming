#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100. For multiples of three, prints "Fizz"
 * instead of the number, for multiples of five, it prints "Buzz", and for
 * numbers which are multiples of both three and five, it prints "FizzBuzz".
 * Return: Always 0 (Success)
 */
	int main(void)
	{
	for (int n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
		printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
		printf("Fizz");
		}
		else if (n % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d", n);
		}

		if (n != 100)
		{
		printf(" ");
		}
		else
		{
		printf("\n");
		}
	}
return (0);
}

