#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cat;

	for (cat = 'z'; cat <= 'a'; cat--)
	{
		putchar(cat);
	}
		putchar('\n');

	return (0);
}
