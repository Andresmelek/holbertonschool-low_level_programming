#include "holberton.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: String
 * Return: Integer value
 */


int _atoi(char *s)

{
	int x = 0, i = 0, numb = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			numb *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		x = (x * 10) - (s[i++] - '0');

	return (x * numb);
}
