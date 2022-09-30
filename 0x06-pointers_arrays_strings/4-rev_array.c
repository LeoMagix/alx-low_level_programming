#include "main.h"

/**
 * reverse_array - print reversed content of array
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tnt, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tnt = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tnt;
	}
}
