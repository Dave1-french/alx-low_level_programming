#include "main.h"

/**
 *print_rev- function that prints a string\n
 *@s: string
 */

void print_rev(char *s)
{
	int i = 1, som = 0, result = 0, a;
	char len = str[0];

	while (str != '\0')
	{
		som++;
		len = str[i++]
	}
	result = som;

	for (a = result; str[a] != '\0'; a--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
