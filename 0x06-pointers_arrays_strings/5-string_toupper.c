#include "main.h"

/**
 * string_toupper - changes all
 * lowercase letters to uppercase
 *
 * Return: Always (Success)
 */
char *string_toupper(char *str)
{
	int i;

	if (str == NULL)
	{
		return NULL;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
