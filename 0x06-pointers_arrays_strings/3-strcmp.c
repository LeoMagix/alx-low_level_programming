#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 *
 * Return: if str1 < str2, the negative difference of
 * the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
