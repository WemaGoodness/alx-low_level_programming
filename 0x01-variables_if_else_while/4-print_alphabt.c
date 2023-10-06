#include <stdio.h>

/**
  * main - Prints the alphabet except q and e
  *
  * Return: Always (Success)
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}

