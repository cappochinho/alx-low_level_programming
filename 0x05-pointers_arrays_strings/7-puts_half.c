#include "main.h"

/**
 * puts_half - Described below
 * Description: Prints the last or least half of a string
 * @str: String input
 * Return: No value
 */

void puts_half(char *str)
{
	int i, l;

	l = strlen(str);

	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
			printf("%c", str[i]);
	}
	else
	{
		for (i = (l + 1) / 2; i < l; i++)
			printf("%c", str[i]);
	}

	putchar('\n');
}
