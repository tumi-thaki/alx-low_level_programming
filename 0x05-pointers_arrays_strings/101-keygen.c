#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates valid random passwords
 * Return: 0 always
 *
*/

int main(void)
{
	int num, count , total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		num = rand() % 125;
		printf("%d\n", num);
		total -= num;
	}
	printf("%d\n", total);
	return (0);
}
