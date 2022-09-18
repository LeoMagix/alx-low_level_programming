#include <unistd.h>
#include <stdio.h>

/**
 * main - print 3 combination of digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, b, l;

	for (c = '0'; c <= '9'; c++)
	{

		for (b = '0'; b <= '9'; b++)
		{

			for (l = '0'; l <= '9'; l++)
			{

				if (c < b && b < l)
				{
					putchar(c);
					putchar(b);
					putchar(l);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}

				}

			}

		}
	}
	putchar('\n');
	return (0);
}

