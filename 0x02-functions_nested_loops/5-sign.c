#include "main.h"

/**
 * print_sign -check numbers
 *
 * @n : number to check
 *
 * Return: 0 or 1 or -1 based on the result
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
