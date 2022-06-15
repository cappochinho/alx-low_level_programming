#include "main.h"

/**
 * _strcat - Described below
 * Description: Concatenates a source string to a destination string
 * @dest: Destination string
 * @src: Source string
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int pos, i;

	for (pos = 0; dest[pos] != '\0'; pos++)
		;

	i = 0;
	while (*(src + i))
	{
		*(dest + pos + i) = *(src + i);
		i++;
	}

	*(dest + pos + i) = '\0';

	return (dest);
}
