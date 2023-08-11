#include <stdio.h>
/**
 * main - entry point, print lowercase aplhabets in reverse
 * Return: 0 Always for success
*/
int main(void)
{
	char c = 122;
	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
