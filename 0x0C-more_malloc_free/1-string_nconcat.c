#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats strings
 * @s1: first string
 * @s2: second string
 * @n: n amount of bytes
 * Return: a character value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, con1, con2;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	con1 = 0;
	con2 = 0;
	while (s2[con2] != '\0')
		con2++;
	while (s1[con1] != '\0')
		con1++;

	if (n >= con2)
		n = con2;

	s = malloc(sizeof(char) * n + con1 + 1);
	if (s == NULL)
		return (NULL);

	/*unsigned int*/

	for (x = 0; x < con1; x++)
		s[x] = s1[x];

	for (x = 0; x < n; x++)
		s[x + con1] = s2[x];

	s[x + con1] = '\0';

	return (s); /*the string char*/
}
