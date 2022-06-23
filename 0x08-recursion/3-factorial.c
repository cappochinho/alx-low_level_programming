#include "main.h"

/**
 * factorial - Described below
 * Description: Takes an integer n and finds its factorial
 * @n: Integer input
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
