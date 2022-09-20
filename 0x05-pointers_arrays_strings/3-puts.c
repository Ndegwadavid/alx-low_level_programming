#include "main.h"
#include "2-strlen.c"
/**
 * _puts - print string with new line
 * @str: this is the pointer for the string to be printed
 *
 * Return always 0.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar("\n")
}
			i++;
	}
	_putchar("\n");
}
