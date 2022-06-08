#include "main.h"

/**
 * jack_bauer - Description on next line
 * Description: Prints every minute of the day in 24hr format
 *
 * Return: No value
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i <= j || j <= i)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar(':');
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
				_putchar('\n');
				if (i == 23 && j == 59)
					break;
			}
		}
	}
}
