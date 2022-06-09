#include "main.h"

/**
 * _isdigit - Description below
 * Description: Checks if input is a number
 * @c: Character input
 * Return: 1 if number or 0 is not a number
 */

int _isdigit(int c)
{
	char i = '0';
	int digit;

	digit = 0;
	for (; i <= '9'; i++)
	{
		if (i == c)
			digit = 1;
		else
			digit = 0;
	}
	return (digit);
}
