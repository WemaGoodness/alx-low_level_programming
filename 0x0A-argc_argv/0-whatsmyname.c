#include "main.h"
#include <stdio.h>

/**
 * myname - prints program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Program name
 */
int myname(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("No arguments provided.\n");
	}

	return (0);
}
