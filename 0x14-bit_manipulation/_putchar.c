#include <unistd.h>

/**
 * _putchar - writes c to standard output
 * c: character to be printed
 *
 * Return: 1 if true, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
