#include "holberton.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: last digit of a number
 *
 * Return: Returns n the las value of the last digit
 */
int print_last_digit(int n)
{


	if (n > 0)
		{
		n = n % 10;
		_putchar(n + '0');
		}
		else
			{
			n = -(n % 10);
			_putchar(n + '0');
			}
	return (n);
}
