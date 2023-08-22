#include "main.h"

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
