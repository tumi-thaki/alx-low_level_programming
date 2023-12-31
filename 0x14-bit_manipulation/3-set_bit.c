#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set bit in
 * @index: index number to set bit in
 * Return: 1 if successful, -1 for error
 *
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
