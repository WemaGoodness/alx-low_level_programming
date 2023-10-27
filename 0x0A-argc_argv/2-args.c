#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return(0);
}
