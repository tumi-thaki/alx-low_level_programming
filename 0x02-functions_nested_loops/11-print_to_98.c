#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from input n to 9
 * @n: argument to start counting from
 * Return: nothing void
 *
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n == 98)
	{
		printf("98");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
