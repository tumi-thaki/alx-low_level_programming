#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the lis
 * @str: string information to be added
 * Return: the address of the new element, or NULL if it fails
 *
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
	unsigned int len = 0;

	if (!head)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	while (temp)
	{
		if (temp->next == NULL)
			temp->next = new;
		temp = temp->next;
	}

	return (new);
}
