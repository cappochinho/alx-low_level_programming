#include <stdio.h>

/**
 * main - Start of execution
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char s[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	int i;

	for (i = 0; s[i] != ('\0'); i++)
		putchar(s[i]);
	putchar('\n');

	return (0);
}
