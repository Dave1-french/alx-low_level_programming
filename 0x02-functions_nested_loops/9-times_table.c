#include "main.h"
/**
 * times_table - Entry point
 * Description: 'function that printd=s the 9 times tables, starting with 0'
 *
 */
void times_table(void)
{
	int n, g, result = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (g = 1; g <= 9; g++)
		{
			_putchar(',');
			_putchar(' ');

			result = n * g;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
