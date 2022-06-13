#include "main.h"

/**
 * puts2 - Description below
 * Description: Prints only array indices whose modulo with 2
 * gives 0
 * @str: String input
 * Return: No value
 */

void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l] != '\0'; l++)
		;
	i = 0;
	while (i < l)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
