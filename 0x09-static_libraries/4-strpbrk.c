#include "main.h"

/**
 * _strpbrk - search string for bytes
 * @s: pointer to bytes
 * @accept: string to search
 *
 * Return: Always (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
