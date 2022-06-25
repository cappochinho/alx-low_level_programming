#include "main.h"

/**
 * main - Multiplies two numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mux = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mux *= atoi(argv[i]);
		}
		printf("%d\n", mux);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
