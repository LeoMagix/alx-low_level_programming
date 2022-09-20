#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value received
 * Description: check for alphabet
 * Return: if 1 its true, and false if 0
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
