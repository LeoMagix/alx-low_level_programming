#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Description - using main function
 *This program reverses alphabets
 * Result: always 0 (success)
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
