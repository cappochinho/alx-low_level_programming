#include "main.h"

/**
 * _isupper - Described below
 * Description: Checks if a character constant is uppercase
 * @c: Character input
 * Return: 1 if TRUE or 0 if FALSE
 */

int _isupper(int c)
{
	char check = 'A';
	int upper;

	upper = 0;
	for (check = 'A'; check <= 'Z'; check++)
	{
		if (c == check)
		{
			upper = 1;
			break;
		}
	}
	return (upper);
}
