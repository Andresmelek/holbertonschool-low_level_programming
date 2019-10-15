#include "holberton.h"
/**
 * _isupper -function that checks for uppercase character.
 * @c: uppercase character
 * Return: Returns 0 when is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
