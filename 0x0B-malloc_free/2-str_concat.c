#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: return concated string
 */

char *str_concat(char *s1, char *s2)
{
	int x, con1, con2;
	char *conc;

	x = 0;
	con1 = 0;
	con2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
		con1++;
	}

	x = 0;

	while (s2[x] != '\0')
	{
		x++;
		con2++;
	}
	conc = malloc(sizeof(char) * (con1 + con2 + 1));
	if (conc == NULL)
		return (NULL);

	for (x = 0; x < con1; x++)
	{
		conc[x] = s1[x];
	}

	for (x = 0; x < con2; x++)
	{
		conc[x + con1] = s2[x];
	}
	conc[x + con1] = '\0';
	return (conc);
}
