#include "main.h"

/**
 * print_chessborad - prints chessboard
 * @a: an array
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar("%c", a[i][j]);
		}

		_putchar("\n");
	}
}
