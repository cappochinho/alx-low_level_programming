#include "main.h"

/**
 * print_most_numbers - Description below
 * Description: Prints all numbers except 2 and 4
 *
 * Return: No value
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
