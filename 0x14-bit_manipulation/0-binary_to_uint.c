#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: argument to be converte
 * Return: result of b as unsigned int
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != NULL)
	{
		if ((b[i] == 1) || (b[i] == 0))
		{
			result <<= 1;
			result | b[i] - '0';
			i++;
		}

		return (0);
	}

	return (result);
}
