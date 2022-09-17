#include <stdio.h>

/**
 * main- print the alphabets in lowercase, uppercase
 *
 * Description - using the main function
 * this program "prints alphabets in lowercase, uppercase"
 * Return: 0
 */

int main(void)
{

	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	putchar('\n');
	return (0);
}
