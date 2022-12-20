#include "main.h"

/**
 *print_rev- function that prints a string\n
 *@s: string
 */

void print_rev(char *s)
{
	int som = 0;
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		som++;
	}

	for (a = (som - 1); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

