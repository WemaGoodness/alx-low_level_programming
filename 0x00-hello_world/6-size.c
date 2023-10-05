#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	printf("Size of a char: %d-byte(s)\n", sizeof(char));
	printf("Size of an int: %d-byte(s)\n", sizeof(int));
	printf("Size of floating-point: %d-byte(s)\n", sizeof(float));
	printf("Size of long int: %d-byte(S)\n", sizeof(long int))
	printf("Size of long long int: %d-byte(s)\n", sizeof(long long int));
	printf("Size of double: %d-byte(s)\n", sizeof(double));
	
	return (0);
}
