#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argvb argument pointer
 * Return: 0 for success, 1 for error
 *
*/
int main(int argc, char **argv)
{
	if (argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
		printf("%d\n", argv[1] * argv[2]);
	return (0);
}
