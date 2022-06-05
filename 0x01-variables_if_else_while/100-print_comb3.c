#include <stdio.h>

/**
 * main - Program starts
 * Prints the least of the combination of -
 * two digits in ascending order of magnitude
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, t;

	for (s = 48; s <= 56; s++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (s < t)
			{
				putchar(s);
				putchar(t);
				if (s != 56 || t != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
