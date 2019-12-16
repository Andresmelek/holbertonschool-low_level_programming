#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the first node
 * @index: node index
 * Return: node at the nth position
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		aux = aux->next;
		i++;
	}

	return (aux);
}
