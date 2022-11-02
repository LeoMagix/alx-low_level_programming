#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1 - 0.
 *    Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int leng = 0;

	if (b[leng] == '\0')
		return (0);

	while ((b[leng] == '0') || (b[leng] == '1'))
	{
		num <<= 1;
		num += b[leng] - '0';
		leng++;
	}

	return (num);
}
