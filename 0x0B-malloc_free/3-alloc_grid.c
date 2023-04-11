#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - returns a pointer
 * @width: width of array
 * @height: height of array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **pa;
	int a = 0, b = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	pa = (int **) malloc(sizeof(int *) * height);

	if (pa == NULL)
		return (NULL);

	for (; a < height; a++)
	{
		pa[a] = (int *) malloc(sizeof(int) * width);
		if (pa[a] == NULL)
		{
			free(pa);
			for (; b <= a; b++)
				free(pa[b]);
			return (NULL);
		}
	}
	for (; a < height; a++)
	{
		for (; b < width; b++)
		{
			pa[a][b] = 0;
		}
	}
	return (pa);
}
