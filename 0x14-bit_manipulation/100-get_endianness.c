#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int16_t pointer = 1;

	if (pointer == 1)
		return (1);
	return (0);
}
