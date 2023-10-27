#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string to print
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
