#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to it as arguments
 * @separator: Separates printed strings
 * @n: Number of strings to be passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i != n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
