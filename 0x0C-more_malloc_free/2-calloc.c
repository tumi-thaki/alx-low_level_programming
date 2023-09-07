#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements or array
 * @size: size the array
 * Return: pointer to the allocated memory
 *
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	a = malloc(size * nmemb);

	if ((size == 0) || (nmemb == 0) || (a == NULL))
		return (NULL);

	return (a);
}
