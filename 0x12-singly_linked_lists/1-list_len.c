#include "lists.h"

/**
 * list_len - returns the number of linked list elements
 * @h: Pointer to linked list
 *
 * Return: Number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
