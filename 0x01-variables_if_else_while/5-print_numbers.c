#include <stdio.h>
/**
 * main - entry point, prints numbers from 0 to 9 using printf
 * Return: 0 always for success
*/
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
