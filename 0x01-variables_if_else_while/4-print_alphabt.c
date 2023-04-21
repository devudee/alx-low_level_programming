#include <stdio.h>

/**
 * main - print alphabet in lower case,
 * followed by a new line, except q and e
 * Return: 0
 */
int main(void)
{
	char ud = 'a';

	while (ud <= 'z')
	{
		if (ud != 'e' && ud != 'q')
		{
			putchar(ud);
		}
		ud++;
	}
	putchar('\n');
	return (0);
}
