#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	int integer;
	long long_num;
	long long longer_num;
	float floating_point;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_num));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longer_num));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_point));

	return (0);
}
