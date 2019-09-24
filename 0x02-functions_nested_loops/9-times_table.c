#include "holberton.h"
/**
 * times_table - function that prints 9 times table from 0
 *
 */

void times_table(void)
{
	int w, x, y, z;
	z = x * y;

	for (w = 0; w <= 10; w++)
		{
			for (x = 0; x <= 9; x++)
				{
					for (y = 0; y <= 9; y++)
						if(w < 10)
						{
						_putchar(z);
						_putchar(',');
						}
						else 
						_putchar('\n');
				}
		}
}
