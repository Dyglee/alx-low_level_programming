#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name using the given print style
 * @name: name of the person
 * @f: function pointer to the printing function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
