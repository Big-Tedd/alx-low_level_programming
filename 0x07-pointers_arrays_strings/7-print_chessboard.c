#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: input pointer to the chessboard
 * Return: always (0) zero
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
