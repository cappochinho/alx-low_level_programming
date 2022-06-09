#include "main.h"

/**
 * more_numbers - Description below
 * Description: Prints from 0 to 14 ten times
 *
 * Return: No value
 */

void more_numbers(void)
{
	int n, i, j;

	n = 1;
	while (n <= 10)
	{
		for (i = '0'; i <= '1'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (i == '0' || (i == '1' && j < '5'))
				{
					_putchar(i);
					_putchar(j);
				}
			}
		}
		_putchar('\n');
		n++;
	}
}
