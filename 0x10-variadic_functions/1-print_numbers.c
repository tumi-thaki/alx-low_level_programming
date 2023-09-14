#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbrs followed by a newline
 * @separator: string to separate the numbers for display
 * @n: number of integers passed to the function
 * Return: nothing
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_list;

	va_start(arg_list, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if ((i != (n - 1)) && (separator  != NULL))
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_list);
}
