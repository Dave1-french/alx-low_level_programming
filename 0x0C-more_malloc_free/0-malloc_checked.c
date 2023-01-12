#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *dav;

	dav = malloc(b);
	if (dav == NULL)
		exit(98);
	return (dav);
}
