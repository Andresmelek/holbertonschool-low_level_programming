#include "holberton.h"
/**
 * print_alphabet - function that returns the alphabet in lower case
 *
 * Return: returns the alphabet in lower case
 */
void print_alphabet(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
