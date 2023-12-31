#include "main.h"

/**
 * cap_string - capitalizes words of
 * a string
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	const char sch[] = " \t\n,;.!?\"(){}";
	int i, j, first_char = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (first_char && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		first_char = 0;

		for (j = 0; sch[j] != '\0'; j++)
		{
			if (str[i] == sch[j])
			{
				first_char = 1;
				break;
			}
		}
	}

	return (str);
}
