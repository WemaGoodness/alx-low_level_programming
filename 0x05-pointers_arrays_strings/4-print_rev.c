#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int length = 0;
	
	do{
		length++;
	} while ((length >= 0) && (s[length] != '\0'));

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
