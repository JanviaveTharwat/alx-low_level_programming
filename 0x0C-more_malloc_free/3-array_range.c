#include "main.h"
#include <stdlib.h>



/**
 * *array_range - creates an array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer of a new array
 */

int *array_range(int min, int max)
{
	int *pt;
	int e = 0, vol;

	if (min > max)
		return (NULL);

	vol = max - min + 1;

	pt = malloc(vol * sizeof(int));

	if (pt == NULL)
		return (NULL);
	for (; min <= max; e++)
		pt[e] = min++;
	return (pt);
}
