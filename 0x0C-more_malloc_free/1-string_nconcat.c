#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates
 * two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always a success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *conc;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = (s1 == NULL) ? "" : s1;
		s2 = (s2 == NULL) ? "" : s2;
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	conc = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		conc[i + j] = s2[j];
	}

	conc[i + j] = '\0';

	return (conc);
}
