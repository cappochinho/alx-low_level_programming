#include <stdio.h>
#include <string.h>

/**
 * main - Start of program
 *
 * Return: Always 0 (indicates Success)
 */

int main(void)
{
	char s[30] = "abcdefghijklmnopqrstuvwxyz";
	char t[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	int i = 0;

	strcat(s, t);
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');

	return (0);
}
