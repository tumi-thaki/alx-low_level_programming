#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to newly allocated space
 *
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a, *tmp;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	if (ptr == NULL)
		return (a);

	tmp = ptr;
	for (i = 0; i < new_size; i++)
		a[i] = tmp[i];

	free(ptr);
	return (a);
}
