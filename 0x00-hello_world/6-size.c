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
	float f;
	double d;

	printf("The size of char is: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("The size of int is: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("The size of float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	printf("The size of double is: %lu byte(s).\n", (unsigned long)sizeof(d));
	printf("The size of a long long int is: %llu byte(s).\n",
	(unsigned long long)sizeof(i));

	return (0);
}
