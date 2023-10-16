#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int length, sign = 1;
	int num = 0, equiv = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (s[length] == '-')
		{
			sign *= -1;
		}
		if (s[length] >= '0' && s[length] <= '9')
		{
			num = num * 10 + (s[length] - '0');
			equiv = 1;
		}
		else if (equiv == 1)
		{
			break;
		}
	}

	num *= sign;
	return (num);
}
