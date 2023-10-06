#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}

