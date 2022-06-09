#include "main.h"

/**
 * print_triangle - Description below
 * Description: Prints a right-angled triangle
 * @size: Integer input
 * Return: No value
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if (j >= (size - i + 1) && j <= size)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
