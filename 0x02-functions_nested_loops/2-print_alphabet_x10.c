#include "holberton.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return:Returns the alphabet ten times
 */
void print_alphabet_x10(void)
{

	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
