#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: data contained in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int d;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	d = current->n;
	*head = current->next;
	free(current);
	return (d);
}
