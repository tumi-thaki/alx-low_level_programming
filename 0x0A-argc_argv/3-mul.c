#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument pointer
 * Return: 0 for success, 1 for error
 *
*/
int main(int argc, char **argv)
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
	}
	return (0);
}
