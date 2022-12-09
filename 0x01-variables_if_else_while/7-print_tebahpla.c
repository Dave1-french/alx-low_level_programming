
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char cat;

	for (cat = 'z'; cat >= 'a'; cat--)
		putchar(cat);

	putchar('\n');

	return (0);
}


