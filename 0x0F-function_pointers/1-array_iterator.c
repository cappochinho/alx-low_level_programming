#include "function_pointers.h"

/**
 * array_iterator - Prints an element in an array
 * @array: Pointer to array
 * @size: Size of array
 * @action: Pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
