#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: a pointer to the allocated memory.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n, i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	n = nmemb * size;
	for (i = 0; i < n; i++)
	{
		p[i] = 0;
	}
	return (p);
}
