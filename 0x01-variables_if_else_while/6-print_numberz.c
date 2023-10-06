#include <stdio.h>

/**
  * main - Prints numbers from 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}

