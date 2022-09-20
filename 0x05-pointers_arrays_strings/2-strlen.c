#include "main.h"


/**
 * _strlen - checks the length of a string
 * @s: this is the string to check
 *
 * Return: int length of the string
 * in this case sl is var name for the string length
 */

int _strlen(char *s)
{
	int sl;

	for (sl = 0; s[sl] != '\0'; sl++)
	{}
	return (sl);
}
