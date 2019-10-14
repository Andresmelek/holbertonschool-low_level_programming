#include "holberton.h"
/**
 * _islower - function tha checks for lowercase characters
 * @c: chracter in lowercase
 *
 * Return: Returns 1 if c is in lowercase  and returns 0 when is otherwise
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
	return (1);
	}
	return (0);
}
