#include "main.h"

/**
 * alloc_grid - returns a pointer to a
 * 2d array of integers.
 *
 * @width: width oàf array
 * @height: height of array
 *
 * Return: NULL if failed, else pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
