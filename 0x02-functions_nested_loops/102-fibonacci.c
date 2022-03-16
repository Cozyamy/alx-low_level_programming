#include <stdio.h>
#include "main.h"

/**
 * main - prints sum of even valued fibonacci numbers under 4,000,000
 * Return: 0 if successful
 */

int main(void)
{
	long int i, a, b, sum;

	a = 1;
	b = 2;

	for (ii = 0,sum =0; a < 4000000; i++)
	{
		if (!(a % 2))
			sum += a;
		b = a + b;
		a = b - a;
	}
	printf("%1d\n", sum);
	return (0);
}
