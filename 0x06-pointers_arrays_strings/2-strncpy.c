#include "main.h"

/**
 * _strncpy - Described below
 * Description: Takes a specified length of a string
 * and copies it into another string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to be copied
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
