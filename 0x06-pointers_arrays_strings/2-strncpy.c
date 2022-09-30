#include "main.h"

/**
 * *_strncpy - copy strings
 * @dest: copy destination
 * @src: string to copy
 * @n: number of byte
 * Return: pointer to resulting destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_l = 0;

	while (src[i++])
		s_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s_l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
