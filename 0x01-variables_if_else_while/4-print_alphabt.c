#include <stdio.h>

/**
 * main - print alphabet in lower case,
 * Return: 0
 */
int main(void)
{
	char ud = 'a';

	while (ud <= 'z')
	{
		if (ud != 'e' && ud != 'q')
		{
			putchar(ud)
		}
		ud++;
	}
	putchar('\n');
	return (0);
}
