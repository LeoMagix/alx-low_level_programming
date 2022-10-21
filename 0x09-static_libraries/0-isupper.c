#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
