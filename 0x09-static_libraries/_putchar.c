#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes c to standard output
 * @c: character to print
 *
 * Return: 1 if success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
