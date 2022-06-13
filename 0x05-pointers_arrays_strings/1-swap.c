#include "main.h"

/**
 * swap_int - Description on next line
 * Description: Swaps the values of two integers
 * @a: Pointer to integer a
 * @b:Pointer to integer b
 * Return: No value
 */

void swap_int(int *a, int *b)
{
	int temp1, temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
