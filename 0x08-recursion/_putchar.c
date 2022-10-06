#include <unistd.h>

/**
 * _putchar: write to standard output
 * @c: character to write
 *
 * Return: 1 on sucess, -1 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
