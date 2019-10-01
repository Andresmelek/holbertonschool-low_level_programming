#include "holberton.h"
/**
 * print_rev - function that prints a string in reverse
 *@s: string in reverse
 *
 */
void print_rev(char *s)
{
	int i, len, cont;

	for (i= 0; s[i] != '\0'; i++)
		cont++;

	for (len = cont - 1; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
