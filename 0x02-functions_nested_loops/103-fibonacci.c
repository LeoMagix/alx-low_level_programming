#include <stdio.h>

/**
 * main - Entry point
 * Description: even numbers < 40000
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 1, nxt = 0;
	int sum = 0;

	while (nxt < 40000)
	{
		nxt = i + j;
		i = j;
		j = nxt;

		if (nxt % 2 == 0)
			sum += nxt;
	}

	printf("%i\n", sum);
	return (0);
}
