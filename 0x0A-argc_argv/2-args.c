#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - main funtion
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
