#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Description below
 * Description: Takes an integer input and prints to 98 from there
 * @n: Loop iterator
 *
 * Return: No value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
