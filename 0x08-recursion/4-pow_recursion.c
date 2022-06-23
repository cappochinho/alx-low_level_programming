#include "main.h"

/**
 * _pow_recursion - Described below
 * Description: Finds the power of a number
 * @x: base
 * @y: exponent
 * Return: Exponentiated results
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
}
