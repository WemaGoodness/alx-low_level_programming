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

	printf("Size of a char: %d-byte(s)\n", sizeof(character));
	printf("Size of an int: %d-byte(s)\n", sizeof(integer));
	printf("Size of long int: %d-byte(S)\n", sizeof(long_int));
	printf("Size of long long int: %d-byte(s)\n", sizeof(longer_int));
	printf("Size of float: %d-byte(s)\n", sizeof(floating_point));
	return (0);
}
