#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: Pointer which include.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *array;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len1 = _strlen(s1), len2 = _strlen(s2);

	if (n >= len2)
	n = len2;

	array = malloc(sizeof(char) * (len1 + n + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		array[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}

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
