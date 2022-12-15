#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 whitout 2 and 4\n
 *
 * Return: void
 */


void print_most_numbers(void)
{
	do {
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	} while (c != 2 && c != 4)
	_putchar('\n');
}
