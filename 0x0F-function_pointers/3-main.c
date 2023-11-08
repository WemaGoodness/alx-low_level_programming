#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always a success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	func = get_op_func(operator);

	if (!func || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
