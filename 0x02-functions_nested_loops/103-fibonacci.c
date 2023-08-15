#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 *
*/

int main(void)
{
	int num1 = 0, num2 = 1, num3;
	unsigned long sum;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		if ((num2 % 2) == 0)
		{
			sum += num2;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
