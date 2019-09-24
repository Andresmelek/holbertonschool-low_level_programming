#include "holberton.h"
 /**
 * print_sign - Function that prints the sign of a number
 * @n: Is an integer positive, negative or zero
 *
 *Return: Returns 1 positive,-1 negative and 0 when is zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else
	{
	_putchar(45);
	return (-1);
	}
}
