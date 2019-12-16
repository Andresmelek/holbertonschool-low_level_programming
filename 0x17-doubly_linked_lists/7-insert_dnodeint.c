#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @n: number assigned to the node
 * @idx: index
 * @h: double pointer to the first node
 * Return: the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *aux;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = *h;
	while (i < idx - 1)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	i++;
	}
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	aux->next->prev = newnode;
	newnode->next = aux->next;
	aux->next = newnode;
	newnode->prev = aux;
	return (newnode);
}
