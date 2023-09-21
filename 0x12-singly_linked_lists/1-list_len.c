#include "lists.h"

/**
 * list_len - checks for the number of nodes in a singly list
 * @h: head of the singly list
 * Return: number of elements
 *
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
