#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: void
  */
int main(void)
{
	int count;
	unsigned long f = 0, i = 1, next;
	unsigned long h1, h2, fh1, ih1, fh2, ih2;
	
	for (count = 0; count < 92; count++)
	{
		next = f + i;
		printf("%lu, ", next);

		f = i;
		i = next;
	}

	fh1 = f / 10000000000;
	ih1 = i / 10000000000;
	fh2 = f % 10000000000;
	ih2 = i % 10000000000;
	
	for (count = 93; count < 99; count++)
	{
		h1 = fh1 + ih1;
		h2 = fh2 + ih2;

		if (fh2 + ih2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
		{
			printf(", ");
		}
		
		fh1 = ih1;
		fh2 = ih2;
		ih1 = h1;
		ih2 = h2;
	}
	printf("\n");
	return (0);
	
}

