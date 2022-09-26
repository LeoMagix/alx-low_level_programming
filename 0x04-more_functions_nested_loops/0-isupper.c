#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks if character is uppercase.
 * @c: character to check
 * Return: if 1 true, 0 is false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else 
	{
		return (0);
	}
}
