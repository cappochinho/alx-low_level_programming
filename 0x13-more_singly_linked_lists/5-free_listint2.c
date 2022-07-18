#include "lists.h"

/**
 * free_listint2 - frees a linked list from memory
 * @head: head of linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
