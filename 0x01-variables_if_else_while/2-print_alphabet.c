#include <stdio.h>

/**
 * main - Print alphabets in lowercase
 *
 * Description - using the main function
 * programs prints all the alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
