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

	if (*end != '\0')
	{
		end++;
	}

	end--;

	return (find_lindrome(s, end));
}
