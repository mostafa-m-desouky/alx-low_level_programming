#include "main.h"
#include <stdio.h>

int _recursion(int n, int i);
/**
 * _sqrt_recursion - Entry point
 *
 * @n: intger
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (_recursion(n, 1));
}

/**
 * _recursion - Calculates
 * @n: integer
 * @i: integer
 *
 * Return: natural square
 */

int _recursion(int n, int i)
{
	int rec = i * i;

	if (rec == n)
		return (i);
	else if (rec > n)
		return (-1);

	return (_recursion(n, i + 1));

}
