#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: numbet of elemnts
 * @size: size of bytes
 * Return: pointer or void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		t[x] = 0;

	return (t);
}
