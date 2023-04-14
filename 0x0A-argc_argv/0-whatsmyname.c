#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - main fuction
 * @argc: argument
 * @argv: vector of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
