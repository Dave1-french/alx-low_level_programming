#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *top;

	if (size == 0)
		return (NULL);

	top = malloc(sizeof(c) * size);

	if (top == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		top[i] = c;

	return (top);
}
