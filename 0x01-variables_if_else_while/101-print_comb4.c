#include <stdio.h>
/**
 * main - entry point
 * Return: 0Always for success
*/
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
