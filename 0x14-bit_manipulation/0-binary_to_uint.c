#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to binary number
 * Return: the converted number, or 0 if b is NULL
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int  lenght = 0, power = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[lenght] != '\0')
	{
		lenght++;
	}
	for (i = lenght - 1; i >= 0; i--, power *= 2)
	{
		if (b[i] & 1)
		{
			number +=  power;
		}
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
return (number);
}
