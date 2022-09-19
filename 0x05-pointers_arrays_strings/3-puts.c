#include "main.h"

/**
 * _puts - print string with new line
 * @str: this is the pointer for the string to be printed
 *
 * Return always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
			i++;
	}
	_putchar("\n");
}
