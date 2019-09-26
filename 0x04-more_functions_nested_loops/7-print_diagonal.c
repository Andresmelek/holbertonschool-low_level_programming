#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n:diagonal
 *
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (x == y)
					_putchar(92);
				else 
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
