#include "main.h"

/**
 * print_line - draws a straight linein the terminal
 *@n: checked
 * Return: '_' for n  and \n otherwise
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
