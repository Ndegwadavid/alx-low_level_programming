#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int result = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				result++;
				break;
			}
		}
		if (s[y] == '\0')
			return (result);
	}
	return (result);
}
