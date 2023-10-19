#include "main.h"

/**
 * leet - encodes string into 1336
 * @s: string to be encode
 *
 * Return: Always (Success)
 */
char *leet(char *s)
{
	int x = 0, y = 0, z = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char lr[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if (s[x] == l[y] || s[x] - 32 == l[y])
			{
				s[x] = lr[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}
