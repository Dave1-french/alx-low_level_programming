#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input
 *
 */

void _puts_recursion(char *s)
{
	int i, a = 1;

	while (s[i] != '\0')
		a++;
	for (i = 0; i < a; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
