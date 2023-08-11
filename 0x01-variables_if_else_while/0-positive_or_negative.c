#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point, assigns a random number to variable n
 * Return: 0 Always for success
*/
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);

	if (n > 0)
		puts("is positive");
	if (n == 0)
		puts("is zero");
	if (n < 0)
		puts("is negative");
	putchar('\n')
	return (0);
}
