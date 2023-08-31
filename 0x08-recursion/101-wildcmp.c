#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: argument
 * @s2: argument
 * Return: 1 if they are identical, 0 otherwise
 *
*/

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || ((*s1 != '\0') && wildcmp(s1 + 1, s2)));
	return (0);
}
