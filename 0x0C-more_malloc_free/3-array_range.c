#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: 
 * @max: 
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int i, n;
	int *array;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	array = malloc(sizeof(int) * n);
	if (array == NULL)
		return (NULL);

	for (i = 0;i < n; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

