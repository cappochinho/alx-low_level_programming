#include "main.h"

/**
 * print_number - Described below
 * Description: Prints any number it is given using only _putchar
 * @n: Integer input
 * Return: No value
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
