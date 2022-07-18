#include "lists.h"

/**
 * listint_len - finds the length of a linked list
 * @h: singly linked list
 * Return: Length of linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;
	const listint_t *t = h;

	while (t != NULL)
	{
		node_len++;
		t = t->next;
	}

	return (node_len);
}
