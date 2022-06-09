#include "main.h"

/**
 * _isupper - Described below
 * Description: Checks if a character constant is uppercase
 * @c: Character input
 * Return: 1 if TRUE or 0 if FALSE
 */

int _isupper(int c)
{
	int upper;

	upper = 0;
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c != EOF)
		{
			upper = 1;
		}
		else
		{
			upper = 0;
		}
	}
	return (upper);
}
