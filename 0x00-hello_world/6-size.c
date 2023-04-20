#include <stdio.h>
/**
 * main - to print out the sizes of data types in C
 * Return: 0
*/
int main(void)
{
	char c;
	int a;
	long int d;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
