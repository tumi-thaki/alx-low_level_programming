#include <stdio.h>
/**
 * main - entry point, prints base 16 numbers
 * Return: 0 always for success
*/
int main(void)
{
	char c = 48;

	while (c < 103)
	{
		putchar(c);
		if (c == 57)
			c += 39;
		c++;
	}
	putchar('\n');
	return (0);

}
