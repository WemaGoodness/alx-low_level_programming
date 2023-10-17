#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 * for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int sum = 0, c = 0;
	time_t sec;

	srand((unsigned int) time(&sec));

	while (sum < 2772)
	{
		c = rand() % 128;

		if ((sum + c) > 2772)
		{
			break;
		}
		sum = sum + c;
		
		printf("%d", c);
	}
	c = 2772 - sum;
	
	printf("%d\n", c);
	return (0);
}
