#include "main.h"

/**
 * _strdup - makes a pointer to a newly allocated
 * space in memory, that contains a copy of the
 * string given as a parameter.
 *
 *
 * @str:String to be copied
 *
 *Return: NULL if error,else pointer to the allocated
 *space
*/

char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[len] = '\0';

	return (copy);

}
