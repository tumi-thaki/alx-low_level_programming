#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head of the list
 * @str: str info to be added
 * Return: the address of the new element, or NULL if it faile
 *
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t new;
	unsigned int len = 0, i = 0;
	char *strcpy;

	if ((!str) || (!head))
		return (NULL);

	while(str[len])
		len++;

	strcpy = malloc((len + 1) * sizeof(char));
	if (!strcpy)
		return (NULL);

	while (str[i])
	{
		strcpy[i] = str[i];
		i++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(strcpy);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
