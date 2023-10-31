#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all
 * arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always a success
 */
char *argstostr(int ac, char **av)
{
	int tot_len, i, pos;
	char *arg, *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			tot_len++;
			arg++;
		}

		tot_len++;
	}

	result = (char *)malloc((tot_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			result[pos++] = arg;
			arg++;
		}
		result[pos++] = '\n';
	}

	result[pos] = '\0';
	return (result);
}
