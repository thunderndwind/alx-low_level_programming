#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of 2 args
 *
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: returns 0 in sucess, 1 in failure
*/

int main(int argc, char **argv)
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]) ;

	printf("%d\n", mul);
	return (0);
}
