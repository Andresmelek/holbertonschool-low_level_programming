#include "holberton.h"
/**
 * *_strcpy - function that copies the string pointed to by src to dest.
 * @dest: destiny
 * @src: source
 * Return: Returns the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
