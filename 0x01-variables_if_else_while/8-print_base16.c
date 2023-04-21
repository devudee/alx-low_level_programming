#include <stdio.h>

/**
 * main - printing all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	char ud;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ud = 'a'; ud <= 'f'; ud++)
	{
		putchar(ud);
	}
	putchar('\n');
	return (0);
}
