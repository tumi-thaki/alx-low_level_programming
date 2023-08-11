#include <stdio.h>
/**
 * main - entry point, prints numbers 0 to 9 separated by comma using putchar
 * Return: 0 always for success
*/
int main(void)
{
	int num = 0;

	while (num < 8)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
