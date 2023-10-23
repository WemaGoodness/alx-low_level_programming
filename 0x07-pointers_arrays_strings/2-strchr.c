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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		
		s++;
	}
	
	return (NULL);
}
