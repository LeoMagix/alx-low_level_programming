#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: prints all natural numbers to 98
 * @i: the integer
 * Return: void
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("98\n");
}
