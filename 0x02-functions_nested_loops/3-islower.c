#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks for lowercase
 * @c: the integer value it receives
 * Return: 1 (success)
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
		return (0);
	}
	}

	return (1);
}
