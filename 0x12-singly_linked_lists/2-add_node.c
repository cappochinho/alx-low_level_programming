#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: a pointer to the head pointer
 * @str: a string literal
 * Return: New node
 */

list_t *add(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new_head;

	new_head = (list *) malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}

	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	new_head->len = str_len;
	new_head->next = (*head);
	(*head) = new_head;

	return (new_head);
}
