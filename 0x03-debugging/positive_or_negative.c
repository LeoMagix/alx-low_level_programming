#include "main.h"

/**
 * main - print if the number is positive, 0, negative
 *
 * Description - tThis proogram prints the value of n
 * Return: 0
 */
void positive_or_negative(int i)
{
	
	i = 0;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}

	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
}
