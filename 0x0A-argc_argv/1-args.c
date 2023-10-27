#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of arguments passed
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
