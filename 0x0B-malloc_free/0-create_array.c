#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of array
 * @c: initializing character
 * Return: Pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(size * sizeof(c));
	if (a == 0)
		return (NULL);

	for (; i < size; i++)
		a[i] = c;

	return (a);
}
