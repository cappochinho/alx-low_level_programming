#include "main.h"

/**
 * _strncat - Described below
 * Description: Takes n characters in source string
 * and concatenates to destination string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters from src
 * Return: Destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int pos, i;

	for (pos = 0; dest[pos] != '\0'; pos++)
		;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + pos + i) = *(src + i);
		i++;
	}

	*(dest + pos + i) = '\0';

	return (dest);
}
