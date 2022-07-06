#include "function_pointers.h"

/**
 * print_name - Prints the name passed to the function
 * @name: Pointer to a string literal
 * @f: Function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
