#include "main.h"

/**
 *print_to_98 - Entry point
 *
 *Description: 'function that prints all natural numbers from n to 9'
 *@n: starting number
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
		}
		_putchar(n + '0');
		_putchar('\n');
	}
	else
	{
		while (n > 98)
		{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
		}
		_putchar(n + '0');
		_putchar('\n');
	}

}
