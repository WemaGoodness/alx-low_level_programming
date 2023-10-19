#include "main.h"

/**
 * string_toupper - changes all
 * lowercase letters to uppercase
 *
 * Return: start
 */
char *string_toupper(char *)
{
	char *start = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}

		s++;
	}

	return (start);
}
