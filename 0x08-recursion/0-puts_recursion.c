#include "main.h"

/**
 * _puts_recursion - Printing string using recursion
 * Description: Accepts a string input
 * @s: String input
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar(0);
}
