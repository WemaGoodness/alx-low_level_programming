#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	
	putchar("\n");

	return (0);
}
