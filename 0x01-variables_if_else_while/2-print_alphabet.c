#include <stdio.h>
/**
 * main - entry point,prints lowercase alphabets
 * Return: 0 always for success
*/
int main(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
