#include "main.h"

/**
* _strcpy - Copying from the source and pasting to the destination string
* @dest: the destination
* @src: the source
* Return: the destination pasted string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
