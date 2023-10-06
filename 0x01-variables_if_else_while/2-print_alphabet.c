#include <stdio.h>

/*
 * main
 *
 * Displays lower alphabet characters
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x, '\n');

	return (0);
}
