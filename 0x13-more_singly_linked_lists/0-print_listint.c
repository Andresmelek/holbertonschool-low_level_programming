#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint -  function that prints all the elements of a list_t list.
 * @h: Pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
