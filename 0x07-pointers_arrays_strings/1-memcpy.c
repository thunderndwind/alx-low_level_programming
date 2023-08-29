#include "main.h"

/**
 * _memcpy - it copies n bytes
 * from  src to destination
 *
 * @dest:destination where bytes are copied to
 * @src:source where bytes are copied from
 * @n:number of bytes to be copied
 *
 *Return: pointer to the n
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
