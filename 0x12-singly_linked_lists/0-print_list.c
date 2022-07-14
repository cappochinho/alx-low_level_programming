#include "lists.h"

/**
 * print_list - prints all the elements in linked list
 * @h: pointer to node in list
 *
 * Return: Unsigned integral type
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *l = h;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);
		count++;
		l = l->next;
	}

	return (count);
}
