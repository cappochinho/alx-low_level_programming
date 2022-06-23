#include "main.h"

/**
 * divider - check if n can be divided
 * @n: the number to be checked
 * @div: the result of division
 * Return: 1 if n is divisible or 0 if n is not divisible
 */

int divider(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (divider(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: integer number
 * Return: 1 if n is prime or 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (divider(n, div));
}
