#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char cat;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (cat = 'a'; cat <= 'f'; cat++)
		putchar(cat);

	putchar('\n');

	return (0);
}

