#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head:double  pointer to the first node
 * @index: node index
 * Return: 1 on success, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux, *add;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	while (aux)
	{
		if (i == index - 1)
		{
			if (aux == NULL)
				return (-1);
			add = (aux->next)->next;
			if (aux->next->next != NULL)
				aux->next->next->prev = aux;
			free(aux->next);
			aux->next = add;
			return (1);
		}
		else if (index == 0)
		{
			*head = (*head)->next;
			if (aux->next != NULL)
				aux->next->prev = NULL;
			else
				*head = NULL;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
return (-1);
}
