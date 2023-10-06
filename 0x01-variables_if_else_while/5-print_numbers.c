#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 from 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	char singled;

	for (singled = '0'; singled <= '9'; singled++)
	{
		putchar(singled);
	}
	printf("\n")

	return (0);
}
