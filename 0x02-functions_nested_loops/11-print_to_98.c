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
	do {
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	} while (n <= 98)
}
