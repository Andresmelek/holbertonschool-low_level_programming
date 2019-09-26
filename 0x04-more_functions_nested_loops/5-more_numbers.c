#include "holberton.h"
/**
 * more_numbers - function that prints 10 times from 0 to 14
 *
 */
void more_numbers(void)
{
	int y;
	int z;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 1; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (y != 0)
				{
				_putchar(y + '0');
				}
				_putchar(z + '0');
				if (y == 1 && z == 4)
				{
				break;
				}
				}
			}
			_putchar('\n');
			}
}
