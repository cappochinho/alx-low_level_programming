#include <stdio.h>
/**
 * main - Start of program
 * Prints decimal number, adds comma and leaves a space
 * Return: Always 0 (Successful execution)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
