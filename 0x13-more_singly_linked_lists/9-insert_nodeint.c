#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n:  integer
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}
	temp = *head;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
