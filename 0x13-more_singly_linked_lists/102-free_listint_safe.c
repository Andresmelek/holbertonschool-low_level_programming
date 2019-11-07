#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - function that prints a linked list
 * @h: double pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *kep, *temp = *h;
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (temp != NULL)
	{
		if (temp->next >= temp)
		{
			return (count);
		}
		count++;
		kep = temp;
		temp = temp->next;
		free((void *)kep);
	}
	*h = NULL;
	return (count);
}
