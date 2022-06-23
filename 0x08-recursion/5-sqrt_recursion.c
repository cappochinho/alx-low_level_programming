#include "main.h"

/**
 * sqrt_check - Described below
 * Description: Guesses the sqrt of a number
 * @n: integer n
 * @min: min
 * @max: max
 * Return:Square root of n
 */

int sqrt_check(int n, int min, int max)
{
	if (max < min)
		return (-1);

	int guess;
	int squared = guess * guess;
	
	guess = (min + max) / 2;

	if (squared == n)
		return (guess);
	else if (squared < n)
		sqrt_check(n, guess + 1, max);
	else
		sqrt_check(n, min, guess - 1);
	return (0);
}

/**
 * _sqrt_recursion - Described below
 * Description: Calls another function to find the square root of n
 * @n: Integer input
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 1, n));
	return (0);
}
