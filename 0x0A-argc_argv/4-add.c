#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument storage
 * Return: 1 for error, 0 for success
 *
*/

int main(int argc, char **argv)
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < (argc - 1); i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(((argv[i][j] >= '0') && (argv[i][j] <= '9')) || (argv[i][j] == '-')))
			{
				printf("Error\n");
				return (1);
			}
			
			
			result += atoi(argv[i]);
		}
	}

	printf ("%d\n", result);
	return (0);
}
