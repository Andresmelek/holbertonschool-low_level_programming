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
	int i, j, len = 0;
	char *array;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	i = 0;
	while (s1[i])
	i++;

	j = 0;
	while (s2[j])
	j++;

	len = i + j + 1;
	array = malloc(sizeof(char) * len);
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
		array[i + j] = s2[j];
		j++;
	}
	array[i + j] = '\0';
	return (array);
}
