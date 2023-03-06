#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: size of rows in board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
