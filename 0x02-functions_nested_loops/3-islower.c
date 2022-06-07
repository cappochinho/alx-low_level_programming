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
	int c;

	if (c >= 'a' || c <= 'z')
		return (1);

	else
		return (0);
}
