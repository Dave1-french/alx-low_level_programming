#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input
 *
 */

void _puts_recursion(char *s)
{
	int i, a = 0, e;

	for (e = 0; s[e] != '\0'; e++)
		a++;
	for (i = 0; i <= a; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
