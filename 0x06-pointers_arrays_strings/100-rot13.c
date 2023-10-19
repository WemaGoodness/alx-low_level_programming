#include "main.h"

/**
 * rot13 - encodes a string
 * @input: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;
	char base;

	if (s == NULL)
	{
		return NULL;
	}

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			base = (s[i] >= 'a') ? 'a' : 'A';
			s[i] = base + (s[i] - base + 13) % 26;
		}
	}
	return (s);
}
