#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: argument, the head
 * @s2: argument, the string to coppy bytes from
 * @n: number of bytes to copy
 * Return: pointer to allocated space in memory
 *
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  i = 0, j = 0, len1 = 0, len2 = 0, tmp;
	char *str;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for(; s1[len1]; len1++)
		continue;

	for (; s2[len2]; len2++)
		continue;

	if (n >= (len2 + 1))
		tmp = (len2 + 1);
	else
		tmp = n;

	str = malloc((len1 + tmp + 1) * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for(; j <= len1; j++)
		str[j] = s1[j];
	--j;

	for(; i < tmp; i++, j++)
		str[j] = s2[i];
	str[j] = '\0';

	return (str);

}
