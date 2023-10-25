#include "main.h"

/**
 * find_lindrome - looks for palindrome
 * @start: beginning of string
 * @end: end of string
 *
 * Return: 1 or 0
 */
int find_lindrome(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}

	return (find_lindrome(start + 1, end - 1));
}

/**
 * _strlen - finds length of string
 * @s: string to measure
 *
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1));
}
/**
 * is_palindrome - shows if s is a
 * palindrome
 * @s: string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	char *end = s;

	if (*s == '\0')
	{
		return (1);
	}

	end += _strlen_recursion(s) - 1;

	return (find_lindrome(s, end));
}
