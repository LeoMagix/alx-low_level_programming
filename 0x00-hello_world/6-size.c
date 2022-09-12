#include <stdio.h>

/**
 * main - prints the size using sixeof function
 *
 * Description - this program using the main function
 * will print the size of the data types
 * Return: 0
 */
int main(void)

{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
