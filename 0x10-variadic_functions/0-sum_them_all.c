#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: result, sum, 0 if n us 0
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (;i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
