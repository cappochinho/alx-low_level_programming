#include <stdio.h>

/**
 * main - Start of program
 * Program prints numbers from decimals from 0-9
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}

