#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the listint_t list.
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head)
    {
	tmp = head->next;
	free((void *)head->n);
	free(head);
	head = tmp;
    }
}
