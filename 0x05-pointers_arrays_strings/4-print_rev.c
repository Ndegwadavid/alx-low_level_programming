#include "main.h"

#include "2-strlen.c"
/**
 * print_rev - the reverse gear
 * @s: print this string
 *
 * Return: always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
