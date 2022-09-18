#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combinations of two digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, b;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (c < b)
			{
				putchar(c);
				putchar(b);

				if (c != '8' || (c == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}

	putchar('\n');
	return (0);
}
