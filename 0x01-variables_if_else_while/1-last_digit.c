#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry poit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	printf("Last digit of %d is %d ", n, ld);

	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
