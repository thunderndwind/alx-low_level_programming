#include "main.h"

/**
 * _isalpha - checks for alpha character
 * @c: the character to check
 * Description: checks if alpha
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'z');
}
