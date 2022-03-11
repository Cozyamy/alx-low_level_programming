#include(stdio.h)

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		putchar(letra);
	for (letra = 'A'; letra <= 'Z'; letra++)
		putchar(letra);
	putchar(10);
	return (0);
}
