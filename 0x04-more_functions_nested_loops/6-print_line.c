#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: times the stright is gonna print
 *
 *
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 1; x <= n; x++)
	_putchar(95);
	}
	_putchar('\n');
}
