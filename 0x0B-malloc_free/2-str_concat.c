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

	if (s1 == NULL)
	return ("");

	if (s2 == NULL)
	return ("");

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0';j++)

	array = malloc(sizeof((i * j) * sizeof(char) + 1));
	if (array == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while(s1[i])
	{
		array[i] = s1[i];
		i++;
	}

	while(s2[j])
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}