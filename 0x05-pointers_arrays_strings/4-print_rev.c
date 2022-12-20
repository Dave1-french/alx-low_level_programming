#include "main.h"

/**
 *print_rev- function that prints a string\n
 *@s: string
 */

void print_rev(char *s)
{
	int i, som = 0, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		som++;
	}

	for (a = (som - 1); str[a] != '\0'; a--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
