#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - sum of two integers
 * @a: int
 * @b: int
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts
 *
 * @a: int
 * @b: int
 *
 * Return: subtracts
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies
 *
 * @a: int
 * @b: int
 *
 * Return: multiplies
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides
 *
 * @a: int
 * @b: int
 *
 * Return: divides
 */

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 * op_mod - modules
 *
 * @a: int
 * @b: int
 *
 * Return: modules
 */

int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
