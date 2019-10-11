#include "holberton.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: integer
 * Return: Return the factotorial, 1 when n is 1/0 and -1 when is < 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
