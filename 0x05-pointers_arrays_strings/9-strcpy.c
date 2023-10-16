#include "main.h"

/**
 * *_strcpy - copies string
 * @dest: destination pointer
 * @src: origin pointer
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
