#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 + 1 > size_r)
	{
		return (0);
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		i--;
		j--;
		k++;
	}

	r[k] = '\0';

	int left = 0;
	int right = k - 1;

	while (left < right)
	{
		char temp = r[left];
		r[left] = r[right];
		r[right] = temp;
		left++;
		right--;
	}
	return (r);
}
