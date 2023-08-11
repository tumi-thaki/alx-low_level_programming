#include <stdio.h>
/**
 * main - entry point, prints numbers 0 to 9 separated by comma using putchar
 * Return: 0 always for success
*/
int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
