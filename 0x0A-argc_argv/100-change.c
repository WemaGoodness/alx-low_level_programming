#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int numcoins = 0;
	int i;

	if (argc !=2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numcoins++;
		}
	}

	printf("%d\n", numcoins);
	return (0);
}
