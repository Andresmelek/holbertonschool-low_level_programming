#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{

	int x;
	int y;

	x = n % 10;
	y = -1 * x;
	
	if (n < 48)
	  {
	  _putchar(y + '0');
	  }
	else
	  {
	  _putchar(x + '0');
	  }
	return (n);
}
