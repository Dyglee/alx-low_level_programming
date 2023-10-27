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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

