#include "holberton.h"

/**
 * puts_half - function should print the second half of the string.
 * @str: string
 */
void puts_half(char *str)
{
	int cont = 0 , i, e, half = 0;

	for (i = 0; str[i] != '\0'; i++)
		cont++;
	{
		if (cont % 2 == 0)
		{
			half = cont / 2;
			for (e = half; e < cont; e++)
			_putchar(str[e]);
		}
		else
		{
			half = ((cont - 1) / 2);
			for (e = half; e < cont; e++)
				_putchar(str[e]);
		}
	}
	_putchar('\n');
}
