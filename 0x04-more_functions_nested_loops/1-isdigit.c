#include "holberton.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)..
 * @c: digit
 * Return:Returns 1 when c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
