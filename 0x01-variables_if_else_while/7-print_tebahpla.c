#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ud;

	for (ud = 'z'; ud >= 'a'; ud--)
	{
		putchar(ud);
	}
	putchar('\n');
	return (0);
}
