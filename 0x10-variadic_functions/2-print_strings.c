#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_list;

	va_start(arg_list, n);

	for (; i < n; i++)
	{
		if (va_arg(arg_list, char *)  != NULL)
			printf("%s", va_arg(arg_list, char *));
		else
			printf("(nil)");

		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_list);
}
