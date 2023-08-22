#include "main.h"

/**
 * puts2 - prints a part of the gaven string
 * @str: string to be printed
 *
 * Return: nothing;
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
