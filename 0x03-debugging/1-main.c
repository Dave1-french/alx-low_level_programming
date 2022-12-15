#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;/*declaration of i*/

	printf("Infinite loop incoming :(\n");

	i = 0;/*initialize of i*/

	while (i < 10)/*while i is less than 10 print i*/
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
