#include "lists.h"

/**
 * print_list - prints all the elements in linked list
 * @h: pointer to node in list
 *
 * Return: Unsigned integral type
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
