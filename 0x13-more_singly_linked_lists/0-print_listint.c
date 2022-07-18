#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *t = h;

	while (t != NULL)
	{
		node_num++;
		printf("%d\n", t->n);
		t = t->next;
	}

	return (node_num);
}
