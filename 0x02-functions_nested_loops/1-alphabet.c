#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Alaways 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
