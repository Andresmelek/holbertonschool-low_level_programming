#include "holberton.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
