#include <stdio.h>
#include "main.h"

/**
 * main - Description below
 * Cofirms if a multiple of 3 or 5 or both with a word output
 *
 * Return: Always 0(Program success)
 */

int main(void)
{
	int i;

	i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else
			printf("%i", i);
		_putchar(' ');
	}
	_putchar('\n');
	
	return (0);
}
