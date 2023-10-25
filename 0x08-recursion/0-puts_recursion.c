#include "main.h"

/**
 * _puts_recursion - prints a sting
 * @s: string to be printed
 *
 * Return: s
 */
void _puts_recursion(char *s)
{
	_puts_recursion(s);
	_putchar('\n');

	return (0);
}
