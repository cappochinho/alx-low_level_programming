#include "main.h"

/**
 * print_array - Described below
 * Description: Print any given array followed by a
 * comma and a space till the last array, then
 * print new line
 * @a: Array input
 * @n: Integer representing number of array elements
 * Return: No value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
