#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to search gor
 * Return: If a set is marched-pointer to marched byte
 * If no match-NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
