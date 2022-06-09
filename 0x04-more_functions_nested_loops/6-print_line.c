#include "main.h"

/**
 * print_line - Description below
 * Description: Prints line for a positive input number
 * @n: Integer input
 * Return: No value
 */

void print_liine(int n)
{
	int i;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}

	else
		_putchar('\n');
}
