#include "holberton.h"
/**
 * _isalpha - function that checks for alphabetic characters
 * @c : parameter to check for an alphabetic character
 *
 * Return: Returns 0 when there is an alphabetic characte
 * and returns 1 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
