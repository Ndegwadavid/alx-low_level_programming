#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array am creating
 * @c: char to start with
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int x;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size); /*the array*/
	if (t == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		t[x] = c; /*c is the char to initialize with*/

	return (t);
}
