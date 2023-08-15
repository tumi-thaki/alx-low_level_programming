#include "main.h"
/**
 * main - entry point, prints putchar using putchar function
 * Return: 0 always for success
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
