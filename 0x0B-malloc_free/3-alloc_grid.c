#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int h, w, **p;

	if (height <= 0 || width <= 0)
		return (NULL);

	p =  malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		p[h] = malloc(sizeof(int) * width);

		if (p[h] == NULL)
		{
		for (; h >= 0; h--)
			{
				free(p[h]);
			}
			free(p);
			return (NULL);
		}
	}
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
				p[h][w] = 0;
		}
	return (p);
}
