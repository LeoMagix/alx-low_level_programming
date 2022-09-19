#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Decription: The character to print is c
 * Return: 1 (succes)
 * On error returns -1, and errno is appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
