#include <stdio.h>

/**
 * main - entry point
 * Description: prints nos from 0 to 100, prints Fizz for multiples of 3, Buzz for those of 5 and FizzBuzz for both
 * Return: 0 always for success
 *
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((n % 3) != 0 && (n % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
