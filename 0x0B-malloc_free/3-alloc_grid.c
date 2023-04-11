#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pinter of new grid
 * WELCOME TO THE MATRIX
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		t[x] = (int *)malloc(sizeof(int) * width);
		if (t[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(t[y]);
			}
			free(t);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			t[x][y] = 0;

	return (t);
}
