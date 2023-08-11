#include <stdio.h>
/**
 * main - entry point, print all combinations of two numbers separated by comma
 * Return: 0 Always for success
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8 || num2 != 9)
999988888888			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
