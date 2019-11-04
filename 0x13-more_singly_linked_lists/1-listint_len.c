#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements
 * @h: pointer to the first element
 *  Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
