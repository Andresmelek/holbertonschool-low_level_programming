#include "lists.h"
/**
 * dlistint_len - function that returns the length
 * of a list
 * @h: pointer to the first node
 * Return: Lenght of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
