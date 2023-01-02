#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer destination
 *@b: constant byte
 *@n: number of byte
 *Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
