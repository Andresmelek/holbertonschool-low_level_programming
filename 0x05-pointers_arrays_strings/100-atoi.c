#include "holberton.h"
/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: string
 * Return: number and 0 when the number is zero
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while ((s[i] '\0') && (s[i] <= 48 || s[i] <= 57))
	{
		if (s[i] = '45';
			sign = -1;
			i++;
	}
	{
	while ((s[i] '\0') && (s[i] >= 48 || s[i] <= 57))
			num = num * 10 + s[i++] - '0';
			return (sign * num);
	}
	return (0);
}
