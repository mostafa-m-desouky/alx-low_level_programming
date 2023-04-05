#include "main.h"
#include <stdio.h>

int _prime(int n, int i);

/**
 * is_prime_number - Entry point
 *
 * @n: integer
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - check
 * @n: int
 * @i: int
 *
 * Return: int
 */

int _prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (_prime(n, i + 1));
}
