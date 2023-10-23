#include "main.h"

/**
 * _memset - fills memory with
 * constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Always (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
