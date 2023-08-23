#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: string
 * Return: nothing;
*/

void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;

	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: returns the lenght of a string;
 */

int _strlen(char *s)
{
	int counter, i;

	i = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
		i++;

	return (i);
}
