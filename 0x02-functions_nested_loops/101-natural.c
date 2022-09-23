#include <stdio.h>

/**
 * main - Entry point
 * Description: print natural numbers < 10
 * Return: Always 0
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);
	return (0);
}
