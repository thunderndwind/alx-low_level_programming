#include "main.h"

/**
 * _strchr - it finds the first occurrence
 * of the character c in the string s if exists 
 *
 * @s:string targeted
 * @c:character targeted
 *
 * Return: returns pointer to first occcurence of c
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
