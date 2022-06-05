#include <stdio.h>

/**
 * main - Program starts
 * Prints the least of the combination of -
 * three digits in ascending order of magnitude
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, f, g;

	for (e = 48; e <= 55; e++)
	{
		for (f = 49; f <= 56; f++)
		{
			for (g = 50; g <= 57; g++)
			{
				if (e < f < g)
				{
					putchar(e);
					putchar(f);
					putchar(g);
					if (e != 55 || f != 56 || g != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
