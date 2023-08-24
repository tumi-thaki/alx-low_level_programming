#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: argument, number to be added
 * @n2: argument, number to be added
 * @r: buffer to store result
 * @size_r:size of the buffer
 * Return: pointer to number as string
 *
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i]; i++)
		continue;

	for (j = 0; n2[j]; j++)
		continue;

	if (i > size_r || j > size_r)
		return (0);

	m = 0;

	for (i -= 1, j -= 1, k = 0; k < size_r - 1; k++, i--, j--)
	{
		n = m;

		if (i >= 0)
			n += n1[i] + '0';
		if (j >= 0)
			n += n2[j] + '0';
		if (i < 0 && j < 0 && n == 0)
			break;

		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';

	if (i >= 0 || j >= 0 || m)
		return (0);

	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}

	return (r);
}
