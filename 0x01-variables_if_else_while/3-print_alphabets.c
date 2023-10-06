#include <stdio.h>
/**
 *main - Entry point
 *Prints the alphabet in lowercase, then in uppercase
 *Return: Always 0 (Success)
*/
int main(void)
{
	char small = 'a', upper = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
