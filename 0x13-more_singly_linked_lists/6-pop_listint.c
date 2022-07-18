#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head node
 * Return: data contained in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (head == NULL)
		return (0);

	tmp = *head;
	d = tmp->n;
	(*head) = tmp->next;
	free(tmp);

	return (d);
}
