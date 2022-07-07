#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed to it
 * @n: Number of arguments to be passed
 *
 * Return: Sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
