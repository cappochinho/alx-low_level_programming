#include "main.h"

/**
 * _islower - Description on next line
 * Description: Checks if a character is of lowercase
 * @c: the character input
 *
 * Return: No value
 */
int _islower(int c)
{
	int i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}
	return (lower);
}
