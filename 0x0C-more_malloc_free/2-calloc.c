#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: Pointer to memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *blank;

	if (nmemb == 0 || size == 0)
		return (NULL);

	blank = malloc(nmemb * size);
	if (blank == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(blank + i) = 0;

	return (blank);
}
