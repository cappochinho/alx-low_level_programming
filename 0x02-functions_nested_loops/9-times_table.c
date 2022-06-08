#include "main.h"

/**
 * times_table - Described below
 * Description: Multiplication table of 9 by 9
 *
 * Return: No value
 */
void times_table(void)
{
	int s, t, n;

	for (s = 0; s <= 9; s++)
	{
		for (t = 0; t <= 9; t++)
		{
			n = s * t;

			if ((n / 10) == 0)
			{
				if (t != 0)
					_putchar(32);
				_putchar(n + '0');

				if (t == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (t == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
