#include "main.h"

/**
 * _atoi - Turn String int Integers
 * @s: string to be converted
 * Return: value of converted string
 */

int _atoi(char *s)
{
	int sn = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sn *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sn);
}
