#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference between
 * a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds modulus of a / b
 * @a: first integer
 * @b: second integer
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0) 
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
