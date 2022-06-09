#include "main.h"

/**
 * _isdigit - Description below
 * Description: Checks if input is a number
 * @c: Character input
 * Return: 1 if number or 0 is not a number
 */

int _isdigit(int c)
{
	int digit;

	digit = 0;
	for (c >= '0'; c <= '9'; c++)
	{
		if (c != EOF)
			digit = 1;
		else
			digit = 0;
	}
	return (digit);
}
