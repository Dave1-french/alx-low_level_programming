#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers 1 t0 100\n, 
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3)
			printf("Fizz ");
		else if (i % 5)
			printf("Buzz ");
		else if (i % 3 && i % 5)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
