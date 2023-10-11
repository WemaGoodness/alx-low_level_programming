#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	do {
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	} while (i <= 9);
}
