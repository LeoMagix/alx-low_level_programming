#include <stdio.h>

/**
 * main - print aplpabets lowercase, uppercase
 *
 * Description - using the main function
 * program prints "alphabets omitting o and e"
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
				putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
