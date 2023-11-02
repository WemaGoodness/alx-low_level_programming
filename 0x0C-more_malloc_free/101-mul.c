#include "main.h"
#include <stdlib.h>

/**
 * str_length - grts length of string
 * @str: string to measure
 *
 * Return: String length
 */
int str_length(const char *str) 
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * is_all_dgits - checks if
 * string has digits only
 * @str: string to be checked
 *
 * Return: 1 or 0
 */
int is_all_digits(const char *str) 
{
	int i, len = str_length(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two
 * positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: always a success
 */
void multiply(const char *num1, const char *num2)
{
	int i, j, len1 = str_length(num1), carry = 0, product, start;
	int len2 = str_length(num2);
	int result_len = len1 + len2;
	char *result;
	if (!is_all_digits(num1) || !is_all_digits(num2))
	{
		exit(98);
	}
	result = malloc(result_len + 1);
	if (result == NULL) 
	{
		exit(98);
	}
	for (i = 0; i < result_len; i++)
	{
		result[i] = '0';
	}
	result[result_len] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}
	while (start < result_len && result[start] == '0') 
	{
		start++;
	}
	for (i = start; i < result_len; i++)
	{
		write(1, &result[i], 1);
	}
	write(1, "\n", 1);
	free(result);
}
