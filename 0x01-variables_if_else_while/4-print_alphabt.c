#include <stdio.h>
#include <string.h>

/**
 * main - Start of execution
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char s[30] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; s[i] != ('\0'); i++)
	{
		if (s[i] == 'q' || s[i] == 'e')
			;
		else
			putchar(s[i]);
	}
	putchar('\n');

	return (0);
}
