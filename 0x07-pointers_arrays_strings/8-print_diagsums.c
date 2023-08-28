#include "main.h"

#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of integers
 * @a: matrix, argument
 * @size: dimensions of square matrix
 * Return: nothing
 *
*/

void print_diagsums(int *a, int size)
{
	int i, diag0 = 0, diag1 = 0;

	for (i = 0; i < size; i++)
	{
		diag0 += a[(i * size) + i];
		diag1 += a[(i * (size - 1)) + (size - 1)];
	}

	printf("%d, %d\n", diag0, diag1);
}
