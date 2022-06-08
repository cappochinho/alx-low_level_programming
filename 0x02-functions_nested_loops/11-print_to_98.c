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
			printf("%i", n);
			if (n < 98 && n != 98)
			{
				putchar(44);
				putchar(32);
			}
			else
				putchar(32);
		}
	}

	else
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n > 98 && n != 98)
			{
				putchar(44);
				putchar(32);
			}
			else
				putchar(32);
		}
	}
}
