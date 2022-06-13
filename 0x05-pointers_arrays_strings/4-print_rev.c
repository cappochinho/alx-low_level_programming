#include "main.h"

/**
 * print_rev - Description below
 * Description: Prints a string in reverse
 * @s: String input
 * Return: no value
 */

void print_rev(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
