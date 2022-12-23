#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string
 * @n: number of elements of the array
 * Return: difference in s1 and s2
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
