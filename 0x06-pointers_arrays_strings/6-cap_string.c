#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @s: argument,string to be capitalized
 * Return: pointer to the string
 *
*/

char *cap_string(char *s)
{
	int i = 0, j;
	int a[ ] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == a[j])
			{
				if ((s[i + 1] <= 122) && (s[i + 1] >= 97))
					s[i + 1] -= 32;
			}
		}
		i++;
	}

	return (s);
}
