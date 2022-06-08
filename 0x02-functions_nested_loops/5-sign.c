#include "main.h"
/**
 * print_sign - Description below
 * Description: Print sign on a number
 * @n: Number input
 *
 * Return: A value to affirm a number's sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
