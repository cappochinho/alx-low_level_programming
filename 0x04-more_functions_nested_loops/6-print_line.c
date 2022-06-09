#include "main.h"

/**
 * print_line - Description below
 * Description: Prints line for a positive input number
 * @n: Integer input
 * Return: No value
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
