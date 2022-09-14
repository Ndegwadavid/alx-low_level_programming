#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
