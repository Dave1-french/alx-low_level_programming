#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: ' prints the alphabet, in lowercase, followed by a new line.'
 */

void print_alphabet(void)
{
	char cat;

	for (cat = 'a'; cat <= 'z'; cat++)
		_putchar(cat);

	_putchar('\n');
}
