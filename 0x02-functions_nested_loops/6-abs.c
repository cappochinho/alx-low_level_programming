#include "main.h"

/**
 * _abs - Description below
 * Description: Outputs the absoute of a given integer number
 * @int: integer input
 *
 * Return: Absolute value of input
 */
int _abs(int)
{
	int i;

	if (i < 0)
		return (i + (-2 * i));
	else if (i >= 0)
		return (i);
}
