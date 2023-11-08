#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - gets functions from
 * 3-op_functions.c
 * @s: pointer to operator
 *
 * Return: Always a success
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
