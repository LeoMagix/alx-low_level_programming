#include "main.h"

/**
 * print_line - draw straight lines
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (i < n && n > 0)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
