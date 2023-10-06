#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digit of a number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x_th_place = n % 10;

	if (x_th_place > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x_th_place;
	}
	else if (x_th_place == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x_th_place);
	}
	else if (x_th_place < 6 && x_th_place != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x_th_place);
	}

	return (0);
}

