#include "main.h"

/**
 *swap_int - swaps two integers
 * @a: the first integer
 * @b: the second integer
 * Return: nothing;
*/

void swap_int(int *a, int *b)
{
	int swapper = *a;

	*a = *b;
	*b = swapper;
}
