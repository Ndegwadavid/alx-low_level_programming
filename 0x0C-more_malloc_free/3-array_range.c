#include "main.h"
#include <stddef.h> /*for NULL*/
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of int array
 * @min: minimum of array range
 * @max: maximum of array range
 * Return: int value
 */

int *array_range(int min, int max)
{
	int x;
	int *t;
	int range; /*just a var name, doesnt rep the range*/

	if (min > max)
		return (NULL);
	range = 0;
	for (x = min; x <= max; x++)
		range++;

	t = malloc(sizeof(int) * range);
	if (t == NULL)
		return (NULL);

	x = 0;
	while (min <= max)
	{
		t[x] = min;
		x++;
		min++;
	}
	return (t);
}
