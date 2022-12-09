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
	char cat, e, q;

	e = 'e';
	q = 'q';
	for (cat = 'z'; cat <= 'a'; cat--)
	{
		if (cat != e && cat != q)
		{
			putchar(cat);
		}
	}
	putchar('\n');

	return (0);
}
