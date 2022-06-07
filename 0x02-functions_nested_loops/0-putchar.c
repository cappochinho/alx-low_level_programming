#include <unistd.h>
#include "main.h"

/**
 * main - This code is the first demo of a
 * custom header file with a user-defined functions
 *
 * Return: Always 0 (indicates Success)
 */
int main(void)
{
	char s[15] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}

