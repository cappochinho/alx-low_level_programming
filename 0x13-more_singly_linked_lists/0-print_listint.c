#include "lists.h"

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *t = h;

	while (t != NULL)
	{
		printf("%i\n", t->n);
		t = t->next;
		node_num++;
	}
	return (node_num);
}
