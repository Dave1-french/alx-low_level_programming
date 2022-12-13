#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: 'function that prints the last digit of a number'
 * @n: integer to be computed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n >= 0)
		_putchar(lastdigit + '0');
	else
	{
		lastdigit *= -1;
		_putchar(lastdigit + '0');
	}
	return (last_digit);
}
