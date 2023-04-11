#include <stdio.h>
#include <stdlib.h>
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

if (grid == NULL || height == 0)
return;
	
for (; a < height; a++)
free(grid[a]);

free(grid);
}
