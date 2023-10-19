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
	char l = "AEOTL";
	char lr = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; l[j]; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] + 32))
			{
				s[i] = lr[j];
				break;
			}
		}
	}
	return (s);
}
