#include "holberton.h"
/**
 * times_table - function that prints 9 times table from 0
 *
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
		{
		for (y = 0; y <= 9; y++)
			if (x * y <= 9)
			{
				if (y != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			_putchar((x * y) % 10 + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar((x * y) / 10 + '0');
			_putchar((x * y) % 10 + '0');
			}
		_putchar('\n');
		}
}
