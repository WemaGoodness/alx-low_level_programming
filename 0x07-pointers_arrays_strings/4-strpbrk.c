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
	char *p = s;

	while (*p != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*p == *a)
			{
				break;
			}

			a++;
		}

		if (*a == '\0')
		{
			p++;
		}
		else
		{
			break
		}
	}

	if (*p == '\0')
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
