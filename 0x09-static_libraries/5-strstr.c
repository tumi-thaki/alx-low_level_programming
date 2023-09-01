#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring to be searched for
 * Return: pointer to beginning of located substring or NULL if not found
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0; 

	if (needle[0] != '\0')
	{
		while (haystack[i] != '\0')
		{
			if (haystack[i] ==  needle[0])
				return (haystack + i );
			i++;
		}
	}
	return (NULL);
}
