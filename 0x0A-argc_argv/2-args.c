#include <stdio.h>

/**
 *main - prints all arguments it received
 *@argc: argument count
 *@argv: argument vector
 *Return: returns 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

		return (0);
}
