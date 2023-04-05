#include "main.h"

/**
 * helper - help decide if it okey
 * @i: helper int
 * @n: integer to be tested
 * Return: value
 */

int helper(int i, int n)
{
	int h;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		h = helper(i + 1, n);
		return (h + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - return the sqr
 * @n: integer to return
 * Return: return int of squareroot
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
