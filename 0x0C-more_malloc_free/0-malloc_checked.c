#include "main.h"

/*
 * malloc_checked - Allocates memory and returns a pointer to the memory
 * Description: Nothing more to be said
 * @b: Size of memory space
 *
 * Return: Pointer to memory space
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
