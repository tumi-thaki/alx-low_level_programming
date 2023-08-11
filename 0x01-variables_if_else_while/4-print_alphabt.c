#include <stdio.h>
/**
 * main - entry point, prints all lowercase alphabets except q and e
 * Return: 0 always for success
*/
int main(void)
{
	char c = 97;

	while (c < 123)
	{
		if (c == 101)
		{
			c++;
		}
		else if (c == 113)
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}

	}
	putchar('\n');
	return (0);
}

