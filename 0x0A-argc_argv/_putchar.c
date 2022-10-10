#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: chatacter to write
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
