#include "holberton.h"
/**
 * _square - square of a number
 * @i: first integer
 * @j: second integer
 * Return: number that has square
 */
int _square(int i, int j)
{
	if (i == (j * j))
	{
		return (j);
	}
	else if ((j * j) > i)
	{
		return (-1);
	}
	else
	{
		return (_square(i, j + 1));
	}
}

/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: nteger
 * Return: square root of n
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
	return (_square(n, 1));
	}
}
