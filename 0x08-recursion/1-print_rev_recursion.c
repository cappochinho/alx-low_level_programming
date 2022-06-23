#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse using recursion
 * Description: Accepts a pointer to the first address of a string
 * @s: String pointer
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
