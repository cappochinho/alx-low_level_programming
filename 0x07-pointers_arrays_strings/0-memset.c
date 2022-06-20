#include "main.h"

/**
 * _memset - Described below
 * Description: Fills the first n bytes of the memory area
 * pointer to by s with the constant byte b
 * @s: Pointer to the first memory area
 * @b: Replacement character
 * @n: Number of memory spaces to be replaced
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
