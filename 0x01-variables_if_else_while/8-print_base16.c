#include <stdio.h>

/**
 * main - Start of program
 * Prints all numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	int base_16n;

	for (base_16n = 48; base_16n <= 57; base_16n++)
		putchar(base_16n);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
