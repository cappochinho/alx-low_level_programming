#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ct;
	int sum = 0;

	if (head == NULL)
		return (0);

	ct = head;

	while (ct != NULL)
	{
		sum += ct->n;
		ct = ct->next;
	}

	return (sum);
}
