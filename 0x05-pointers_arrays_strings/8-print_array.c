#include "main.h"

/**
 * print_array - prints array elements
 * @a: argument, array
 * @n: argument, number of elements to be printed
 * Return: nothing
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}

	printf("\n");
}
