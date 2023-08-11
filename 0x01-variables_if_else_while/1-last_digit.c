#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point,print the last digit stored in n
 * Return: 0 foe success always
*/
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	printf("Last digit of %d is %d ", n, num);
	if (num > 5)
		printf("and is greater than 5\n");
	if (num == 0)
		printf("and is 0\n");
	if ((num < 6) && (num != 0))
		printf("and is less than 6 and not 0\n");
	return (0);
}
