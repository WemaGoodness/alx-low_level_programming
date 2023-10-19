#include "main.h"

/**
 * leet - encodes string into 1336
 * @s: string to be encode
 *
 * Return: Always (Success)
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char lr[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = lr[j];
			}
		}
	}
	return (s);
}
