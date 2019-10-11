#include "holberton.h"
/**
 * *_strcat-unction that concatenates two strings.
 * @dest: first string destination
 * @src: second string source
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
	i++;
	}

	j = 0;
	while (src[j])
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
