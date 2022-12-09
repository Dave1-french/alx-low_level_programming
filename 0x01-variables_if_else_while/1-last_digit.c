#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n;
	n = rand() - RAND_MAX / 2;

	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5 and not 0\n", b, n);
	else if (b == 0)
		printf("Last digit of %d is %d and is 0\n", b, n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", b, n);

	return (0);
}
