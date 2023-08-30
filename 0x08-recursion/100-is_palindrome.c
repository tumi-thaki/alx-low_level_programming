#include "main.h"

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: argument, string to check
 * @start: start of checking
 * @end: where to end
 * Return: 1 if true, 0 otherwise
 *
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if true, 0 otherwise
 *
*/

int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (is_palindrome_helper(s, 0, i - 1));
}
