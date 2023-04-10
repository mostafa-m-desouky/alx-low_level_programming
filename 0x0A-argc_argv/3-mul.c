#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: pointer
 * @argv: pointer
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (x = 1; x < 3; x++)
			y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
