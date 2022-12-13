#include "main.h"

/**
 * _print_sign - Entry point
 * Description: 'function that prints the sign of a number'
 * @n: the character to be checked.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}

}
