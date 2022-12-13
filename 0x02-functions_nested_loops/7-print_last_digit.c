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

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
