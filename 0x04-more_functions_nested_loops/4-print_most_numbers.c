#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		{
		if (x != 50 && x != 52)
		_putchar(x);
		}
		if (x > 57)
		{
		_putchar('\n');
		}
}
