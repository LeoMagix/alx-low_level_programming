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
	/*refer to int c*/
	if (c == i)
	{
		return (1);
	}
	}

	return (0);
}
