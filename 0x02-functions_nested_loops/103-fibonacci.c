#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 * fibonacci sequence not exceed
 * 4million
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float total_sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;
		a = b;
		b = sum;
	}
	printf("$.of\n", total_sum);

	return (0);
}
