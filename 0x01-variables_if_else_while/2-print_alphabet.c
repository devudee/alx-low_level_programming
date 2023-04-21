#include <stdio.h>

/**
 * main - printing alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char ud;

	for (ud = 'a'; ud <= 'z'; ud++)
	{
		putchar(ud);
	}
	putchar("\n");
	return (0);
}
