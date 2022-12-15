#include "main.h"

/**
 * print_numbers - Entry point
 * Description: 'function that print the number,from 0 to 9'
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}

	return (0);
}
