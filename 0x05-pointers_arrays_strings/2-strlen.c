#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: string to check
 * Return: strlen
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
