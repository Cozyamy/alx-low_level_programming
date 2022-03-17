#include "main.h"

/**
 * more_numbers - print all numbers 0 through 14 ten tiems
 */

void more_numbers(void)
{
	int i;
	int x;
	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
