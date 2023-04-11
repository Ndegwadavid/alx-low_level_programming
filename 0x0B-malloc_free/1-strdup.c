#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string to copy
 * Return: char to newly duplicated string
 */

char *_strdup(char *str)
{
	int x;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	t = malloc(sizeof(char) * c + 1);

	if (t == NULL)
		return (NULL);

	for (x = 0; x < c; x++)
		t[x] = str[x];

	return (t);
}
