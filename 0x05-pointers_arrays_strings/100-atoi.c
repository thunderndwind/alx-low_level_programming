/**
 * _atoi - converts a string to an int
 *
 * @s: the string to be changed
 *
 * Return: the converted integer
*/

int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= 48 && *s <= 57)
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * i);
}
