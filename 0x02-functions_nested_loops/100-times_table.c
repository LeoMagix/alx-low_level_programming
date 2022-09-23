#include "main.h"

/**
 * print_times_table - Entry point
 * Description: prints multiplication table upto 15
 * @n: the integer
 * Return: number
 */
void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n <= 14)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				p = r * c;
				if (p > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					if (c != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
