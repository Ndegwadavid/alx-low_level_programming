#include "main.h"

/**
 * _print_rev_recursion - twende reverse
 * @s: string to recurse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
