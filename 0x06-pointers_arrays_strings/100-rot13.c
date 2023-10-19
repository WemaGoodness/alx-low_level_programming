#include "main.h"

/**
 * rot13 - encodes a string
 * @input: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *input)
{
	char output;
	char c, base;

	if (input == NULL)
	{
		*output = input;
		return NULL;
	}

	while (*input)
	{
		c = *input;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			base = (c >= 'a') ? 'a' : 'A';
			*input = base + ((c - base + 13) % 26);
		}

		input++;
	}

	return (output);
}
