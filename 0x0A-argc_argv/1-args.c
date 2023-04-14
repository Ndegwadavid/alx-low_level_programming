#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main -main function
 * @arg: argument
 * @argv: vector of arguments
 * Return: 0
 */

int main(int arg, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", arg - 1);
	return (0);
}

