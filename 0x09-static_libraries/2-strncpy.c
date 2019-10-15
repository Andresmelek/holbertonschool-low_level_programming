#include "holberton.h"

/**
 * *_strncpy - Write a function that copies a string
 * @dest: destiny
 * @src: source
 * @n: integer
 * Return: Return destiny
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}
