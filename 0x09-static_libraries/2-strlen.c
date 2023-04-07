#include "main.h"

/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 * sl is the var name for stringlenth
 */
int _strlen(char *s)
{
	int sl;

	for (sl = 0; s[sl] != '\0'; sl++)
	{}
	return (sl);
}
