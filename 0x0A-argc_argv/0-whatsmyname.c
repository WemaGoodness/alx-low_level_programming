#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Program name
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
