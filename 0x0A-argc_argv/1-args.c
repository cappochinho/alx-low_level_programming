#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: 1D array of command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;

	return (0);
}
