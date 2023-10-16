#include "main.h"

/**
 * _strlen - prints lenght of a string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	do
	{
		length++;
	} while ((*s != '0') && (s++));

	return (length);
}
