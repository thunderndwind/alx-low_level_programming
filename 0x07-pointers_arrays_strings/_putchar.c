#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *  and -1 On error .
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
