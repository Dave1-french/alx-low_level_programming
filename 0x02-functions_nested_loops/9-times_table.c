#include "main.h"
/**
 * times_table - Entry point
 * Description: 'function that printd=s the 9 times tables, starting with 0'
 *
 */
void times_table(void)
{
	int n, g, h;

	for (n = 0; n <= 9; n++)
	{
		for (g = 0; g <= 9; g++)
		{
			for (h = 0; h <= 9; h++)
			{
				result = g * h;
				_putchar(result + '0');
				_putchar(',');
			}
			_putchar('\n');
		}
	}
	return (0);
}
