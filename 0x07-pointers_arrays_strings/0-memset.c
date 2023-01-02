#include "main.h"

/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ex;

	for (ex = 0; ex < n; ex++)
	{
		s[ex] = b;
	}
	return (s);
}
