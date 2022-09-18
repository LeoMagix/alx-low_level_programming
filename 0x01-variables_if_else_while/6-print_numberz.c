#include <stdio.h>

/**
 * main - print numbers using putchar
 * Description - using the main function
 * program "prints base 10 numbers"
 * Return: 0
 */

int main(void)
{
	int n;

	for (n ='0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
