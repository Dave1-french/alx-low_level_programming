#include "main.h"

/**
 * _isdigit - Entry point
 * Description: 'function that checks for a digit (0 through 9)'
 * @c: checked digit
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
