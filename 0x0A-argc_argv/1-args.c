#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: pointer
 * @argv: pointer
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)*argv[];
	printf("%d\n", argc - 1);
	return (0);
}
