#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Memory - accept number of bytes
 * @nbytes: number of bytes
 *
 * Return: Always a success
 */
void Memory(int nbytes)
{
	int i;
	char *mainAddr;

	mainAddr = (char *) &Memory;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", mainAddr[i] & 0xFF);
		if (i != nbytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	Memory(nbytes);

	return (0);
}

