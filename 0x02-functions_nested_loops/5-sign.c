#include "main.h"

/**
 * print_sign - Entry point
 * @n: variable
 * Description: prints the integer sign
 * Return: if 1,n > 0, -1, n < 0, and 0 false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
