#include "holberton.h"
#include <stdlib.h>
/**
 * flip_bits - function that returns the number of bits
 * @n: first value to be compared
 * @m: second value to be compared
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m, i = 0;

	while (comp > 0)
	{
		if (comp & 1)
			i++;
		comp = comp >> 1;
	}
	return (i);
}
