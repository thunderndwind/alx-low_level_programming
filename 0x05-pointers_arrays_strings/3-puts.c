#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Description: prints a string
 *
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
