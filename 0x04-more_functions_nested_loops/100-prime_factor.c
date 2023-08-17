#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always success
 *
*/

int main(void)
{
	long long int i, j, largestPrFact = 0, factor;	

	for (i = 0; i <= 612852475143; i++)
	{
		if ((i % 612852475143) == 0)
		{
			fact = i;
			for (j = 0; j <= fact; j++)
			{
				if((j % fact) == 0)
					break;
				else
					if (fact > largestPrFact)
						largestPrFact = fact;
			}
		}
	}
	printf("%lld\n", largestPrFact);
}
