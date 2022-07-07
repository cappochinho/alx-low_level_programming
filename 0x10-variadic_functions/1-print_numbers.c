#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of integers passed to function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int n;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);
	if (i == n - 1)
		printf("%d\n", va_arg(ap, int));

	va_end(ap);
}
