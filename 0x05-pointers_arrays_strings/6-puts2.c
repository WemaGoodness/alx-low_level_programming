#include "main.h"

/**
 * puts2 - prints every other
 * 	character in a string
 * @str: string to print
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != 0)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
			length++;
		}
	}
	_putchar('\n');
}
