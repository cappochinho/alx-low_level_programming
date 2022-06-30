#include "main.h"

/*
 * malloc - Allocates memory and returns a pointer to the memory location
 * @n: Size of memory space
 *
 * Return: Pointer to memory space
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
