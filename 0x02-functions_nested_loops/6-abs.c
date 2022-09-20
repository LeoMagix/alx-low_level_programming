#include "main.h"

/**
 * _abs - Entry point
 * @i: is an integer
 * Description: prints the absolute value
 * Return: int
 */
int _abs(int i)
{

	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}

	else
	{
		return (0);
	}
}
