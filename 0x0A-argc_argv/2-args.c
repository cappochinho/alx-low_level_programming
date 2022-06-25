#include "main.h"

/**
 * main - prints all arguments entered during execution of program
 * @argc: Argument count
 * @argv: Arguments entered at compilation
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
