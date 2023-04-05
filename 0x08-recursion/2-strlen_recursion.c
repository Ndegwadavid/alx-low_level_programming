#include "main.h"

/**
 * _strlen_recursion - lenth of string
 * @s: string of count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l = _strlen_recursion(s + 1);
		return (l += 1);
	}
	return (0);
}
