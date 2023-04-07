#include "main.h"

/**
 * _strstr - locate substring
 * @haystack: string to locate
 * @needle: substring to locate
 * Return: return string at starting sub and null
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	if (needle[0] == '\0')
		return (haystack);

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (haystack[x + y] != needle[y])
					break;
			}
			if (needle[y] == '\0')
				return (haystack + x);
		}
	}
	return ('\0');
}
