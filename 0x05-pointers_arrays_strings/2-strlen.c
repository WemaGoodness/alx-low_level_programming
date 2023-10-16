#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
