#include "main.h"

/**
 * _strlen - Described below
 * Description: Determines the length of a string using a loop
 * @s: String input
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
