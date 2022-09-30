#include "main.h"

/**
 * *string_toupper - change string from lowercase to uppercase
 * @str: string to convert
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

		i++;
	}

	return (str);
}
