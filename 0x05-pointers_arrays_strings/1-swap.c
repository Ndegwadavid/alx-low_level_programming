#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two values
 * @a:first int
 * @b: second int
 *
 * return always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
