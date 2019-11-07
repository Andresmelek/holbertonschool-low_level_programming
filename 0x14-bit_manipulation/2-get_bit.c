#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: index starting from 0 of the bit you want to get
 * @n: number to return
 * Return: he value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		n = (n >> 1);
	}
		if (n == 0)
			return (-1);
	return (n & 1);
}
