#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main
 *
 * Determines whether the last digit of a number 
 * is greater than 5, equal to or not equal to 0, or less than 6.
 *
 * return: always (success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10
	
	if (x > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}

	return (0);
}
