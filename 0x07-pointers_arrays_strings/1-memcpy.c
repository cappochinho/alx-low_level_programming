#include "main.h"

/**
 * _memcpy - Described below
 * Description: Copies n bytes from src to dest
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
