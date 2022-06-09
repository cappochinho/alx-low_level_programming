#include "main.h"

/**
 * print_diagonal - Described below
 * Description: Prints a diagonal line for a given input
 * @n: Integer input
 * Return: No value
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			for (j = 0; j <= (n - 1); j++)
			{
				if (j == (n + i - n))
				{
					_putchar(92);
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
