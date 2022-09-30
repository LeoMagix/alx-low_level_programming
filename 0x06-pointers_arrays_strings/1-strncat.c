#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: strings destination
 * @src: strings to be appended
 * @n: number of bytes
 * Return: pointer to resulting string destinatation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;
	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];
	return (dest);
}
