#include "main.h"

/**
 * print_to_98(int n) - Prints all natural numbers
 * from n to 98
 *
 */

void print_to_98(int n)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
