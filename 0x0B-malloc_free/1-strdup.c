#include "main.h"
#include <stdlib.h>

/**
 * _strdup - ruturns pointer to a newly
 * allocated memory
 * @str: string in memory
 *
 * Return: Always a succeess
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
