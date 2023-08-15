#include <stdio.h>

/**
 * main - entry point, prints the first 50 Fibonacci number
 * Return: 0 always
 *
*/

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, num3;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);
		num1 = num2;
		num2 = num3;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
