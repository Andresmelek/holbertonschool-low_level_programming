#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: triangle shape
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (y == size)
					_putchar('#');
				else
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
