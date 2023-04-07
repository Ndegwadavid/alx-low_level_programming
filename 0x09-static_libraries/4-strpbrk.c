#include "main.h"

/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
