#include <stdio.h>
#include <time.h>
/**
 * main - entry point, assigns a random number to variable n
 * return: 0 Always
*/
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		puts("is positive \n");
	if (n = 0)
		puts("is zero \n");
	if (n < 0)
		puts("is negative \n");
	return (0);
}
