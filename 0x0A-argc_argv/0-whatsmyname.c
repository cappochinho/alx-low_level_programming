#include <stdio.h>

/**
 * main - Prints the name of program, followed by a new line
 * @argc: number of command-line arguments
 * @argv: list of command-line arguments
 * Return: 0 Always(success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
