#include (stdio.h)
/**
 * main - Prints the alphabets in lowercase, then in uppercase
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
