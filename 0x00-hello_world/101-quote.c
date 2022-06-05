#include <stdio.h>

/**
 * main - Start of program
 * Prints character output with printf, puts or any other associated functions
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char name[20] = "Dora Korpar";

	fprintf(stdout, "and that piece of art is useful");
	fprintf(stdout, "\" - %s, 2015-10-19\n", name);

	return (1);
}
