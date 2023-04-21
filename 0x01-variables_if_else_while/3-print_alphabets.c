#include <stdio.h>

/**
 * main - print alphabet in lower case and upper case
 * Return: 0
 */
int main(void)
{
	int ud;

	for (ud = 'a'; ud <= 'z'; ud++)
		putchar(ud);
	for (ud = 'A'; ud <= 'Z'; ud++)
		putchar(ud);
	putchar('\n');
	return (0);
}
