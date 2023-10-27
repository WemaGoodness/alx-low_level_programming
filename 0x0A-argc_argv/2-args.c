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
	for (; argc > 0; argc--)
	{
		printf("%s\n", *argv++);
	}

	return(0);
}
