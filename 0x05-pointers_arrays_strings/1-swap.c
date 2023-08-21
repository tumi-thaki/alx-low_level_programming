#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: number to be swapped
 * @b: argument number to be swapped
 * Return: nothing void
 *
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
