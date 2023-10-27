/**
 * main - Entry point
 *
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: (0) Success
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
