#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers 1 t0 100\n
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15)
			printf("FizzBuzz");
		else if (i % 3)
			printf("Fizz");
		else if (i % 5)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
