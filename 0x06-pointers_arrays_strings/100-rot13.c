#include "main.h"

/**
 * rot13 - encodes a string
 * @input: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
				break;
			}
			s[a] += 13;
			break;
		}
	}
	return (s);
}
