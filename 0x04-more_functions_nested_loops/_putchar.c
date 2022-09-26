#inlcude <unistd.h>

/**
 * _putchar - writes character c as stdout
 * @c: The character to print
 * Return: 1 if true, 0 if false, and -1 on error
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
