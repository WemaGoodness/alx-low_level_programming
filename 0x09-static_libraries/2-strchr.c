#include "main.h"

/**
 * _strchr - finds character in string
 * @s: string to be checked
 * @c: character to be searched
 *
 * Return: Always (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
