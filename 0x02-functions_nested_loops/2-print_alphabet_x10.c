#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: ' prints ten times the alphabet, in lowercase and a new line'
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char cat;

	for (cat = 'a'; cat <= 'z'; cat++)
		_putchar(cat);

	_putchar('\n');
	}
}
