#include "main.h"

/**
 * _strspn - gets lenght of a prefix
 * @s: string to inspect
 * @accept: byte source
 *
 * Return: Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != 0)
		{
			if (*s == *a)
			{
				break;
			}

			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		len++;
		s++;
	}

	return (len);
}
