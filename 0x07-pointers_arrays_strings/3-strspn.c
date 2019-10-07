#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		{
			if (s[i] != accept[j])
			break;
		}
		cont++;
	}
		return (cont);
}
