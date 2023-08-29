#include "main.h"

/**
 * print_chessboard - it prints the chessboard of given size.
 *
 * @a: array containing board elements
 *
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}

}
