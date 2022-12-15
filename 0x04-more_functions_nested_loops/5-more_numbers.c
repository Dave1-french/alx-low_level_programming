#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14\n
 *
 * Return: void
 */


void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(c % 10 + '0');
		}
			_putchar('\n');
	}
}
