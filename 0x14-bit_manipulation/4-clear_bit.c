#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given inde
 * @n: A pointer to the number to modify
 * @index: the index of the but to clear
 * Return: 1 if successful, -1 otherwise
 *
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
