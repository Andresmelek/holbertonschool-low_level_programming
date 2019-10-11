#include "holberton.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: string destiny
 * @src: string source¬*
 * @n: integer
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, j = 0, i = 0;

	while (dest[i])
	i++;

	while (src[j])
	j++;

	while (x < n)
	{
	if (x > j)
	break;
	else
	dest[i] = src[x];
	i++;
	x++;
	}
	dest[i] = '\0';
	return (dest);
	}
