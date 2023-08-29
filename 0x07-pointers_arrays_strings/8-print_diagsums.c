#include "main.h"

/**
 * print_diagsums - it prints the sum of
 * the two diagonals of a square matrix .
 *
 *@a:the matrix to be summed
 *@size:the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i, r1 = 0, r2 = 0;

	for (i = 0; i < size; i++)
	{
		r1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		r2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", r1, r2);
}
