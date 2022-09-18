#include <stdio.h>

/**
 * main - prins all hexagonal numbers
 *
 * Description - usin main function
 * this programs "prints base16 numbers"
 * Request: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
