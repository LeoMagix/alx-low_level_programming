#include "main.h"

/**
 * *_strcat - to concatenate strings
 * @dest: destination string
 * @src: source string to be appended
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
