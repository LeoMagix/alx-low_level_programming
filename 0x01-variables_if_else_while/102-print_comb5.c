#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print possible combo of 2 two-digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int k, l, m, n;

	for (k = 48; k <= 57; k++)
	{
		for (l = 48; l <= 57; l++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (n = 48; n <= 57; n++)
				{
				if (((m + n) > (k + l) && m >= k) || k < m)
				{
					putchar(k);
					putchar(l);
					putchar(' ');
					putchar(m);
					putchar(n);

					if (k + l + m + n == 227 && k == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
