#include "main.h"

/**
 * _abs - Description below
 * Description: Outputs the absoute of a given integer number
 * @i: integer input
 *
 * Return: Absolute value of input
 */
int _abs(int i)
{
	int abs;

	if (i < 0)
		abs = (i + (-2 * i));
	else if (i >= 0)
		abs = i;

	return (abs);
}
