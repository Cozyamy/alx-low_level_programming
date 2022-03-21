#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 *
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
