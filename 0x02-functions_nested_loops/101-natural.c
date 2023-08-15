#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 102
 *
 * Return: 0 always for success
 *
*/

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
