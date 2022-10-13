#include <unistd.h>

/**
 * _putchar - writes to standard output
 * @c: cahracter to print in stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
