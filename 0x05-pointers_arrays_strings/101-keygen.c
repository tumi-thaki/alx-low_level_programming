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
	int num, total;

	srand(time(0));
	while (total < 2772)
	{
		num = rand() % 128;
		if ((total + num) > 2772)
			break;
		printf("%d\n", num);
		total += num;
	}
	printf("%d\n", total - num);
	return (0);
}
