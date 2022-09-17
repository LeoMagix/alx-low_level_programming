#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the  string Last digit of n
 *
 * Description - using the main function
 * program pints the last digits of n
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of n is %d, and is greater than 5\n", n);
	}

	else if (n == 0)
	{
		printf("Last digit of n is %d, and is 0\n", n);
	}

	else
	{
		printf("Last digit of n is %d, and is less than 6 and not 0\n", n);
	}

	return (0);
}