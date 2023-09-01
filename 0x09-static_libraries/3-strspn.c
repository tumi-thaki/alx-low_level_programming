#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string, argument to be checked
 * @accept: substring to be checked for
 * Return: number of bytes that match
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
			j++;
		}		

		i++;
	}

	return (result);
}
