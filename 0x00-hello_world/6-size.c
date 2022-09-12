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

	printf("The size of char is: %ld byte(s).\n", sizeof(c));
	printf("The size of an int is: %ld byte(s).\n", sizeof(i));
	printf("The size of long int is: %ld byte(s).\n", sizeof(li));
	printf("The size of a long long int is: %ld byte(s).\n", sizeof(lli));
	printf("The size of a float is: %ld byte(s).\n", sizeof(f));

	return (0);
}
