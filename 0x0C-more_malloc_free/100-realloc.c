#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (newptr);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (newptr);
}
