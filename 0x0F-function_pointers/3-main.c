#include "3-calc.h"

/**
 * main - Program for simple operations
 * @argc: Argument count
 * @argv: Argument vector
 * Return: exits 0 on normal execution, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
