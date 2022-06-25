#include "main.h"

/**
 * main - Prints the name of program, followed by a new line
 * @argc: number of command-line arguments
 * @argv: list of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
