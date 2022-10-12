#include <unistd.h>

/**
 * _putchar - writes a function to stdout
 * @c: charavcter to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
