#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int index, j;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; n[index] != '\0'; ++index)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[index] == minus[j] || n[index] == mayus[j])
			{
				n[index] = numbers[j];
			}
		}
	}
	return (n);
}

