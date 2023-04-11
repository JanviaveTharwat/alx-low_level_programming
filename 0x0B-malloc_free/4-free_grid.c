#include <stdio.h>
#include "main.h"


/**
 * free_grid -  array
 * @grid:memory block
 * @height:array
 * Return:returns void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);

	free(grid);
}
