#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: unsugned int
 * @c: character
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(c) * size);
	if (array == NULL)
	return (NULL);

	if (size == 0)
	return (NULL);

	for (i = 0; i <= size; i++)
	{
	array[i] = c;
	}
	return (array);
}
