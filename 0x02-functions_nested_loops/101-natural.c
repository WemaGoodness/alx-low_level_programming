#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int t, f = 0;

	do {
		if ((t % 3 == 0) || (t % 5 == 0))
		{
			f += t;
		}

		t++;
	} while (t < 1024);

	printf("%d\n", f);
	return (0);
}
