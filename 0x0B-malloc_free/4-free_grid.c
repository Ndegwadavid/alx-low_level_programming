#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid
 * @grid: grid to free
 * @height: huight of you know grid ofcz
 */

void free_grid(int **grid, int height)
{
	int x;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid); /*freeeeeeeedooom!!!!*/
}
