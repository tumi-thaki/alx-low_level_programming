#include "main.h"

/**
 * _strlen - checks length of string
 * @s: argument, string to check
 * Return: length of string
 *
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

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
	int i = _strlen(s);

	return (is_palindrome_helper(s, 0, i - 1));
}
