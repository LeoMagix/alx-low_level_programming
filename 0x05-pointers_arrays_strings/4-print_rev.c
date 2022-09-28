#include "main.h"

/**
 * print_rev - reverses strings, then new line
 * @s: string for reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
