#include "lists.h"

/**
 * add_nodeint - adds a node at the start of a linked list
 * @head: head of linked list
 * @n: integer attribute of linked list
 * Return: New head of linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
