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

	if (ld > 5)
		printf("and is greater than 5\n");
	else if (ld == 0)
		printf("and is 0");
	else if (ld < 6 && ld != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
