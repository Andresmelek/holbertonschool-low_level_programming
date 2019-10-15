#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: two strings concatenated
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array;

	if (!s1)
	return ("");

	if (!s2)
	return ("");

	i = 0;
	while (s1[i])
	i++;

	j = 0;
	while (s2[j])
	j++;

	array = malloc(sizeof((i * j) * sizeof(char) + 1));
	if (array == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
	{
		array[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
