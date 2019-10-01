#include "holberton.h"

/**
 * puts_half - function should print the second half of the string.
 * @str: string
 */
void puts_half(char *str)
{
	int x, i = 0;

	x = str[i] / 2;
	for (str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(x++);
			_putchar('\n');
		}
		else
		_putchar(str[i] / 10);
		_putchar('\n');
	}
	_putchar('\n');
}
