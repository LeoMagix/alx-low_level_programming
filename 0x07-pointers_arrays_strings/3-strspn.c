#include "main.h"

/**
 * _strspn - prints length of a prefixed substrings
 * @s:  string to be searched
 * @accept: prefixed string
 * Return: number of byte in s which is only
 * byte of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (byte);
		}

		s++;
	}

	return (byte);
}
