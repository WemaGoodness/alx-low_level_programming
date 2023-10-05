#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int integer;
	char character;
	long long_int;
	long long longer_int;
	float floating_point;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(S)\n", sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longer_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_point));
	return (0);
}
