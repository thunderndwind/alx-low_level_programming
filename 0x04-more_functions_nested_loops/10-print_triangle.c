#include "main.h"
/**
*print_triangle - prints a triangle
*@size: numbers of lines.
*Return: no return.
*/
void print_triangle(int size)
{
int rows, columns, x;
if (size <= 0)
_putchar('\n');
for (rows = 0; rows < size; rows++)
{
for (columns = size - rows; columns > 1; columns--)
{
_putchar(' ');
}
for (x = rows + columns; x >= 1; x--)
{
_putchar('#');
}
_putchar(10);
}
}
