#include "function_pointers.h"

/**
 * int_index - Takes a pointer to an array and a function pointer
 * Description: Searches for an integer in the array
 * @array: Pointer to array
 * @cmp: Pointer to function
 * @size: Size of array
 * Return: 0 if not found or index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)) > 0)
			return (i);

	return (0);
}
