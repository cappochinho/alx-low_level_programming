#include "main.h"

/**
 * power - finds the power of a number
 * @base: base
 * @exponent: exponent
 * Return: the power of a given number with its exponent
 */
unsigned int power(unsigned int base, int exponent)
{
	unsigned int under = 1;

	if (exponent == 0)
		return (1);
	else
	{
		for (int i = 0; i < exponent - 1; i++)
			under *= base;

		return (under);
	}
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: String containing binary number
 * Return: decimal version of number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i[b] != '\0'; i++)
	{
		if (i[b] < '0' || i[b] > '1')
			return 0;
	}

	int lshift = 0;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			decimal = decimal + power(2, lshift);

		lshift++;
	}

	return (decimal);

}
