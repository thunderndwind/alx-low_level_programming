#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:all alphapet letters
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		printf("%d", ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
