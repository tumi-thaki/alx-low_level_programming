#include <stdio.h>
/**
 * main - entry point,prints lowercase alphabets
 * return: 0 always for success
*/
int main(void)
{
	char c = 97;
	while((c > 96) && (c < 122))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
