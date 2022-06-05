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
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
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
