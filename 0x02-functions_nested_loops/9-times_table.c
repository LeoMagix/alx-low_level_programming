#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: multiplication table for base10
 * Return: Always 0
 */
void times_table(void)
{
	int rows, columns, product, tens, ones;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			product = rows * columns;
			tens = product / 10;
			ones = product % 10;

				if (columns == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
		}
		_putchar('\n');
	}
}
