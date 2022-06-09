#include "main.h"

/**
 * print_square - Described below
 * Description: Prints a square made of hashes
 * @size: Integer input
 * Return: No value
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j <= (size - 1); j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
