#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void);

int main(void)
{
	char letra;

	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		putchar(letra);
	}
	putchar(10);
	return (0);
}
