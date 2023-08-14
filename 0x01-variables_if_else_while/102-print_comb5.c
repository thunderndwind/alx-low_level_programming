#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing
 *
 * Return: 0
*/

int main(void)
{
	int ch1 = 0, ch2;

	while (ch1 <= 99)
	{
		ch2 = ch1;
		while (ch2 <= 99)
		{
			if (ch2 != ch1)
			{
				putchar((ch1 / 10) + 48);
				putchar((ch1 % 10) + 48);
				putchar(' ');
				putchar((ch2 / 10) + 48);
				putchar((ch2 %  10) + 48);

				if (ch1 != 98 || ch2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch2++;
		}
		ch1++;
	}
	putchar('\n');

	return (0);
}
