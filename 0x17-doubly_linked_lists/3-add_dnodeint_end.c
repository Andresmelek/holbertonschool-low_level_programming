#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: double pointer to the first node of the list
 * @n: number to be assinged to the node
 * Return: New node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *aux;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	aux = *head;
	while (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	newnode->prev = aux;
	aux->next = newnode;
	return (newnode);
}
