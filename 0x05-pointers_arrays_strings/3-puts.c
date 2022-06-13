#include "main.h"

/**
 * _puts - Described below
 * Description: Takes a string literal and prints it
 * @str: String input
 * Return: No value
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
