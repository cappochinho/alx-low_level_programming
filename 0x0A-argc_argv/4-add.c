#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	long unsigned int j = 0;
 	int sum = 0;

	for (; i < argc; i++)
	{
		for (; j < strlen(*argv); j++)
		{
			char store[strlen(*argv)];

			if (argv[i][j] >= '0' || argv[i][j] <= '9')
			{
				store[j] = argv[i][j];
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(store);
	}

	printf("%d\n", sum);

	return (0);
}
