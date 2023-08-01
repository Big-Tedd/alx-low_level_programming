#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: input pointer to the chessboard
 * Return: always (0) zero
 */

void print_chessboard(char (*a)[8])
{
	unsigned int q, k = 0;

	for (q = 0; q < 64; q++)
	{
		if (q % 8 == 0 && q != 0)
		{
			k = q;
			_putchar('\n');
		}
		_putchar(a[q / 8][q - k]);
	}
	_putchar('\n');
}
