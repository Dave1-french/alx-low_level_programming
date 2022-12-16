#include "main.h"

/**
 * print_triangle -prints a triangle\n
 * @size: checked
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, a, ro = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < ro; j--)
			{
				_putchar(' ');
			}
			ro = --size;
			for (a = 0; a < i; a++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
