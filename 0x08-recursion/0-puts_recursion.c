#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input
 *
 */

void _puts_recursion(char *s)
{
	int i, a = 0;

	while (s[i] != '\0')
	{
		a++;
		i++;
	}
	for (i = 0; i < a; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
