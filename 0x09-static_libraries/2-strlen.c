#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: sting
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != 0)
	{
	s++;
	i++;
	}
	return (i);
}
