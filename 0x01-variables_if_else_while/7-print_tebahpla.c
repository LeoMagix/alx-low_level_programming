#include <stdio.h>

/**
 * main - print reverse alphabets
 *
 *Description - using main function
 *This program reverses alphabets
 * Result: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

