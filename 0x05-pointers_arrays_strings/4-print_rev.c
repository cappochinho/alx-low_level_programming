#include "main.h"

/**
 * print_rev - Description below
 * Description: Prints a string in reverse
 * @s: String input
 * Return: no value
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	printf("\n");
}
