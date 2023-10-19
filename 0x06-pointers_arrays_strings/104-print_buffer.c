#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: buffer size
 *
 * Return: Always: (Success)
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i;

	for (i = 0; i < size; i += 20)
	{
		printf("%08x: ", i);
	}

	int j;
	unsigned char byte;

	for (j = 0; j < 10 && i + j < size; j++)
	{
		byte = b[i + j];
		printf("%02x", byte);

		if (j % 2 == 1)
		{
			printf(" ");
		}
	}

	for (; j < 10; j++)
	{
		printf("  ");
		if (j % 2 == 1)
		{
			printf(" ");
		}
	}

	for (j = 0; j < 10 && i + j < size; j++)
	{
		byte = b[i + j];

		if (byte >= 32 && byte <= 126)
		{
			printf("%c", byte);
		}
		else
		{
			printf(".");
		}
	}

	printf("\n");
}
