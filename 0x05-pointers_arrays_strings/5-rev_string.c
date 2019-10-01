#include "holberton.h"
/**
 * rev_string - function that reverses a string.
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;
	int j;
	int x;

	char buff[500];

	i = 0;
	x = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	{
	for (j = i - 1; j >= 0; j--)
	{
		buff[x] = s[j];
		x++;
	}
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		s[j] = buff[j];
	}
}
