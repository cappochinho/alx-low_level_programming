#include "main.h"

/**
 * _isalpha - Description on next line
 * Description: Checks for an alphabetic character input
 * @c: Character input
 *
 * Return: 1 for affirmative, 0 for otherwise
 */

int _isalpha(int c)
{
	int i;
	int c;
	int alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			alpha = 1;
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			alpha = 1;
	}
	return (alpha);
}
