#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: triangle shape
 */
void print_triangle(int size)
{
	int x, y, n = size;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < n - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		n--;
		}
	}
	else
		_putchar('\n');
}
