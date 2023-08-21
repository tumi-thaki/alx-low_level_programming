#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: argument, string to  be converted
 * Return: integer
 *
*/

int _atoi(char *s)
{
	long int num = 0;
	int sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if ((s[i] >= '0') && (s[i]  <= '9'))
			num = (num * 10) + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
