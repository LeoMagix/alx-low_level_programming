#include <unistd.h>

/**
 * _putchar - writes to standard output
 * @c: character to print.
 *
 * Return: 1, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
