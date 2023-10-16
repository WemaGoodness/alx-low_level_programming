#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int length = 0;
	int first = 0, last;
	char word;

	while (s[length] != '\0')
	{
		length++;
	}
	last = length - 1;

	while (first < last)
	{
		word = s[first];
		s[first] = s[last];
		s[last] = word;
		first++;
		last--;
	}
}

