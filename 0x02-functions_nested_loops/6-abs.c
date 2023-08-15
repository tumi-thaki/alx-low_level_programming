#include "main.h"

/**
 * _abs - computes an absolute valu
 * @n: function argument,number to be computed
 * Return: the absolute value of n
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
