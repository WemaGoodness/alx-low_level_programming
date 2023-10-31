#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always a success
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	char *result;
	size_t s1_len = 0;
	size_t s2_len = 0;
	size_t conc_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	conc_len = s1_len + s2_len;

	result = (char *)malloc((conc_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < s2_len; j++)
	{
		result[i + j] = s2[j];
	}

	result[conc_len] = '\0';
	return (result);
}
