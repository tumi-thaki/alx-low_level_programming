#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character of initialization
 * Return: pointer to array
 *
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char*)malloc(size * (sizeof(char)));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
