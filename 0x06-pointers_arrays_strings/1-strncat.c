#include "main.h"

/**
 * _strncat - this one concatenates two strings
 * @dest: string to be appended to
 * @src: the source fo the string to be appended
 * @n: append n number of bytes of the string in this case
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
