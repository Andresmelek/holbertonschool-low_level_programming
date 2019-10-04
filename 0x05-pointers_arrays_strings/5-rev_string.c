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
	char a[300];

	i = 0;
	x = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	{
	for (j = i - 1; j >= 0; j--)
	{
		a[x] = s[j];
		x++;
	}
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		s[j] = a[j];
	}
}
